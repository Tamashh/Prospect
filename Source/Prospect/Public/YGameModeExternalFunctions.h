#pragma once
#include "CoreMinimal.h"
#include "EYPresencePlayerState.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "YPlayerStartCluster.h"
#include "YQuestItemRow.h"
#include "YSelectPlayerStart.h"
#include "YGameModeExternalFunctions.generated.h"

class AActor;

UCLASS(Blueprintable)
class PROSPECT_API UYGameModeExternalFunctions : public UObject {
    GENERATED_BODY()
public:
    UYGameModeExternalFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTravelingPostAuthorization(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMatchSpecificInformationEnabled(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInStation(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInMultiPlayerStation(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInMatch(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInCharacterSelection(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FYPlayerStartCluster> GeneratePlayerStartClusters(const UObject* WorldContextObject, AActor* testActor);
    
    UFUNCTION(BlueprintCallable)
    static void ForceTransitionToTutorial(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static void ForceTransitionToStation(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static void ForceTransitionToCharacterSelection(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static bool FindQuestItemRow(const FDataTableRowHandle rowHandle, FYQuestItemRow& outItemRow);
    
    UFUNCTION(BlueprintCallable)
    static FString FindGameModeName(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static FVector FindDropPodSpawnLocation(const FVector StartLocation, const FRotator startRotation, const UObject* contextObject, const AActor* actorContext);
    
    UFUNCTION(BlueprintCallable)
    static FString FindCurrentRegion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EYPresencePlayerState FindCurrentPresenceState(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static AActor* ChoosePlayerStart(const FYSelectPlayerStart& Data);
    
};

