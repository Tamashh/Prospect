#include "Modules/ModuleManager.h"

#if WITH_EDITOR
#include "Engine/DataTable.h"
#include "Engine/Engine.h"
#include "Engine/Level.h"
#include "Engine/World.h"
#include "EngineUtils.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMaterialLibrary.h"
#include "Materials/MaterialParameterCollection.h"
#include "Misc/PackageName.h"
#include "UObject/StructOnScope.h"
#include "UObject/UObjectGlobals.h"
#include "UObject/UnrealType.h"
#include "YMapInfoRow.h"
#include "YMatchFlowRow.h"
#include "YMatchPhaseData.h"
#endif

class FProspectModule final : public FDefaultGameModuleImpl {
public:
    virtual void StartupModule() override {
        FDefaultGameModuleImpl::StartupModule();

#if WITH_EDITOR
        PostLoadMapHandle = FCoreUObjectDelegates::PostLoadMapWithWorld.AddRaw(
            this,
            &FProspectModule::OnPostLoadMap);
        LevelAddedHandle = FWorldDelegates::LevelAddedToWorld.AddRaw(
            this,
            &FProspectModule::OnLevelAddedToWorld);
        PostWorldInitializationHandle = FWorldDelegates::OnPostWorldInitialization.AddRaw(
            this,
            &FProspectModule::OnPostWorldInitialization);

        if (GEngine) {
            for (const FWorldContext& WorldContext : GEngine->GetWorldContexts()) {
                UWorld* World = WorldContext.World();
                if (World && World->WorldType == EWorldType::Editor) {
                    InitializeEditorMapMaterialParameters(World);
                }
            }
        }
#endif
    }

    virtual void ShutdownModule() override {
#if WITH_EDITOR
        FCoreUObjectDelegates::PostLoadMapWithWorld.Remove(PostLoadMapHandle);
        FWorldDelegates::LevelAddedToWorld.Remove(LevelAddedHandle);
        FWorldDelegates::OnPostWorldInitialization.Remove(PostWorldInitializationHandle);
        InitializedVisualManagers.Reset();
#endif

        FDefaultGameModuleImpl::ShutdownModule();
    }

#if WITH_EDITOR
private:
    static bool GetMapMaterialSelector(const UWorld* World, float& OutMapSelector) {
        if (!World || !World->PersistentLevel) {
            return false;
        }

        const FName PersistentMapName(
            *FPackageName::GetShortName(World->PersistentLevel->GetOutermost()->GetName()));
        if (PersistentMapName == TEXT("MP_Map02_P")) {
            OutMapSelector = 2.0f;
            return true;
        }
        if (PersistentMapName == TEXT("MP_Map01_P")) {
            OutMapSelector = 1.0f;
            return true;
        }
        if (PersistentMapName == TEXT("MP_AlienCaverns_P")) {
            OutMapSelector = 3.0f;
            return true;
        }

        return false;
    }

    static void InitializeEditorMapMaterialParameters(UWorld* World) {
        float MapSelector = 0.0f;
        if (!GetMapMaterialSelector(World, MapSelector)) {
            return;
        }

        UMaterialParameterCollection* GlobalParameters = LoadObject<UMaterialParameterCollection>(
            nullptr,
            TEXT("/Game/Core/Misc/Global_MPC.Global_MPC"));
        if (!GlobalParameters) {
            return;
        }

        static const FName MapParameterName(TEXT("MAP"));
        const float CurrentMapSelector = UKismetMaterialLibrary::GetScalarParameterValue(
            World,
            GlobalParameters,
            MapParameterName);
        if (CurrentMapSelector == MapSelector) {
            return;
        }

        UKismetMaterialLibrary::SetScalarParameterValue(
            World,
            GlobalParameters,
            MapParameterName,
            MapSelector);

        UE_LOG(
            LogTemp,
            Display,
            TEXT("Initialized cooked map material selector to %.0f for %s"),
            MapSelector,
            *World->PersistentLevel->GetOutermost()->GetName());
    }

    static FName FindMapInfoRowName(const UDataTable* MapsInfoTable, const UWorld* World) {
        if (!MapsInfoTable || !World || !World->PersistentLevel) {
            return NAME_None;
        }

        const FString WorldPackageName = World->PersistentLevel->GetOutermost()->GetName();
        FName DirectoryMatch = NAME_None;
        int32 DirectoryMatchLength = 0;

        for (const TPair<FName, uint8*>& RowPair : MapsInfoTable->GetRowMap()) {
            const FYMapInfoRow* MapInfo = reinterpret_cast<const FYMapInfoRow*>(RowPair.Value);
            const FString PersistentMapPackage = MapInfo->m_persistentMap.ToSoftObjectPath().GetLongPackageName();
            if (PersistentMapPackage == WorldPackageName) {
                return RowPair.Key;
            }

            const FString MapDirectory = FPackageName::GetLongPackagePath(PersistentMapPackage);
            if (!MapDirectory.IsEmpty()
                && WorldPackageName.StartsWith(MapDirectory + TEXT("/"), ESearchCase::IgnoreCase)
                && MapDirectory.Len() > DirectoryMatchLength) {
                DirectoryMatch = RowPair.Key;
                DirectoryMatchLength = MapDirectory.Len();
            }
        }

        return DirectoryMatch;
    }

    static const FYMatchFlowRow* FindMatchFlow(
        UDataTable* MatchFlowsTable,
        FName MapInfoRowName,
        FName& OutMatchFlowName) {
        if (!MatchFlowsTable) {
            return nullptr;
        }

        static const TCHAR* Context = TEXT("FProspectModule::InitializeEditorMapVisuals");
        if (!MapInfoRowName.IsNone()) {
            if (const FYMatchFlowRow* MapFlow = MatchFlowsTable->FindRow<FYMatchFlowRow>(
                MapInfoRowName,
                Context,
                false)) {
                OutMatchFlowName = MapInfoRowName;
                return MapFlow;
            }
        }

        OutMatchFlowName = TEXT("Default");
        return MatchFlowsTable->FindRow<FYMatchFlowRow>(OutMatchFlowName, Context, false);
    }

    void OnPostLoadMap(UWorld* World) {
        for (auto It = InitializedVisualManagers.CreateIterator(); It; ++It) {
            if (!It->IsValid()) {
                It.RemoveCurrent();
            }
        }
        InitializeEditorMapMaterialParameters(World);
        InitializeEditorMapVisuals(World);
    }

    void OnLevelAddedToWorld(ULevel*, UWorld* World) {
        InitializeEditorMapMaterialParameters(World);
        InitializeEditorMapVisuals(World);
    }

    void OnPostWorldInitialization(UWorld* World, const UWorld::InitializationValues) {
        if (World && World->WorldType == EWorldType::Editor) {
            InitializeEditorMapMaterialParameters(World);
        }
    }

    void InitializeEditorMapVisuals(UWorld* World) {
        if (!World || World->WorldType != EWorldType::Editor) {
            return;
        }

        UDataTable* MapsInfoTable = LoadObject<UDataTable>(
            nullptr,
            TEXT("/Game/DataTables/MapsInfos_DT.MapsInfos_DT"));
        UDataTable* MatchFlowsTable = LoadObject<UDataTable>(
            nullptr,
            TEXT("/Game/DataTables/MatchFlow/MatchFlows_DT.MatchFlows_DT"));
        if (!MapsInfoTable || !MatchFlowsTable) {
            return;
        }

        const FName MapInfoRowName = FindMapInfoRowName(MapsInfoTable, World);
        FName MatchFlowName = NAME_None;
        const FYMatchFlowRow* MatchFlow = FindMatchFlow(
            MatchFlowsTable,
            MapInfoRowName,
            MatchFlowName);
        if (!MatchFlow || MatchFlow->m_matchFlow.Num() == 0) {
            return;
        }

        FYMatchPhaseData MatchPhaseData;
        MatchPhaseData.m_matchFlowRowHandle.DataTable = MatchFlowsTable;
        MatchPhaseData.m_matchFlowRowHandle.RowName = MatchFlowName;
        MatchPhaseData.m_matchPhaseDefinitionRowHandle = MatchFlow->m_matchFlow[0];
        MatchPhaseData.m_visualVariationIndex = 0;
        MatchPhaseData.m_shouldForcePhaseTransition = true;

        static const FName UpdateFunctionName(TEXT("UpdateMatchPhaseDataEditorOnly"));
        for (TActorIterator<AActor> ActorIt(World); ActorIt; ++ActorIt) {
            AActor* Actor = *ActorIt;
            if (!Actor || InitializedVisualManagers.Contains(Actor)) {
                continue;
            }

            UFunction* UpdateFunction = Actor->FindFunction(UpdateFunctionName);
            if (!UpdateFunction) {
                continue;
            }

            FStructProperty* MatchPhaseParameter = nullptr;
            for (TFieldIterator<FProperty> PropertyIt(UpdateFunction); PropertyIt; ++PropertyIt) {
                FStructProperty* StructProperty = CastField<FStructProperty>(*PropertyIt);
                if (StructProperty
                    && StructProperty->HasAnyPropertyFlags(CPF_Parm)
                    && !StructProperty->HasAnyPropertyFlags(CPF_ReturnParm)
                    && StructProperty->Struct == FYMatchPhaseData::StaticStruct()) {
                    MatchPhaseParameter = StructProperty;
                    break;
                }
            }
            if (!MatchPhaseParameter) {
                continue;
            }

            FStructOnScope Parameters(UpdateFunction);
            void* ParameterValue = MatchPhaseParameter->ContainerPtrToValuePtr<void>(
                Parameters.GetStructMemory());
            MatchPhaseParameter->CopyCompleteValue(ParameterValue, &MatchPhaseData);
            Actor->ProcessEvent(UpdateFunction, Parameters.GetStructMemory());
            InitializedVisualManagers.Add(Actor);

            UE_LOG(
                LogTemp,
                Display,
                TEXT("Initialized cooked map visuals on %s with match flow %s phase %s"),
                *Actor->GetPathName(),
                *MatchFlowName.ToString(),
                *MatchPhaseData.m_matchPhaseDefinitionRowHandle.RowName.ToString());
        }
    }

    FDelegateHandle PostLoadMapHandle;
    FDelegateHandle LevelAddedHandle;
    FDelegateHandle PostWorldInitializationHandle;
    TSet<TWeakObjectPtr<AActor>> InitializedVisualManagers;
#endif
};

IMPLEMENT_PRIMARY_GAME_MODULE(FProspectModule, Prospect, Prospect);
