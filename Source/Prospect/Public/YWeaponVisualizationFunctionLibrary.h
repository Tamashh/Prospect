#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "YActiveWeaponCharacterInitializationData.h"
#include "YModAttachmentInfo.h"
#include "YStoredModData.h"
#include "YWeaponVanityRow.h"
#include "YWeaponVisualizationFunctionLibrary.generated.h"

class UObject;
class USkeletalMeshComponent;
class UYSkeletalMeshComponentFOV;

UCLASS(Blueprintable)
class PROSPECT_API UYWeaponVisualizationFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYWeaponVisualizationFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void GetAllModAttachEntries(const FDataTableRowHandle& weaponRowHandle, const FYStoredModData& modData, TArray<FYModAttachmentInfo>& outAllModAttachEntries);
    
    UFUNCTION(BlueprintCallable)
    static void DetermineAssetsToLoad(const UObject* objectContext, const FYActiveWeaponCharacterInitializationData& Data, TArray<FSoftObjectPath>& outPaths);
    
    UFUNCTION(BlueprintCallable)
    static void DebugSyncLoadWeaponVanityAndApplyVisuals(const UObject* objectContext, const FYActiveWeaponCharacterInitializationData& Data, UYSkeletalMeshComponentFOV* skelMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertRowHandleToWeaponDataTableBase(const UObject* objectContext, const FDataTableRowHandle weaponRowHandle, TArray<FSoftObjectPath>& outPaths);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyWeaponVisuals(const FYActiveWeaponCharacterInitializationData& Data, UYSkeletalMeshComponentFOV* skelMeshComponent, bool setupForFirstPerson, bool showCharm);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyWeaponMainMeshVisual(USkeletalMeshComponent* skelMeshComponent, const FYWeaponVanityRow& weaponVanityRow);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyWeaponAttachmentMeshVisuals(USkeletalMeshComponent* skelMeshComponent, const FYWeaponVanityRow& weaponVanityRow, const FName AttachmentSocketName);

    UFUNCTION(BlueprintCallable)
    static void ApplyModVisuals(UYSkeletalMeshComponentFOV* skelMeshComponent, const FDataTableRowHandle& weaponRowHandle, const FYStoredModData& modData, const FYWeaponVanityRow& weaponVanityRow);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyMeleeWeaponVisuals(const FYActiveWeaponCharacterInitializationData& Data, UYSkeletalMeshComponentFOV* skelMeshComponent, bool setupForFirstPerson);
    
};

