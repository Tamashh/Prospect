#pragma once
#include "CoreMinimal.h"
#include "EYItemType.h"
#include "EYModificationSlotType.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "EYLimitType.h"
#include "YActiveWeaponCharacterInitializationData.h"
#include "YDealtDamageData.h"
#include "YInventoryItem.h"
#include "YStoredInventoryWeaponData.h"
#include "YWeaponFunctionLibrary.generated.h"

class AActor;
class UActorComponent;
class UObject;
class USoundBase;
class UYPersistentWeaponDataComponent;
class UYPlayerCharacterWeaponComponent;
class UYWeaponPlayerControllerRuntimeComponent;

UCLASS(Blueprintable)
class PROSPECT_API UYWeaponFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYWeaponFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static FString ToDebugString(const FYDealtDamageData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidTarget(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    static bool IsItemTypeWeapon(const EYItemType ItemType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDamageable(const AActor* TargetActor, bool considerDmgFromAI, bool considerDmgFromTurrets);
    
    UFUNCTION(BlueprintCallable)
    static bool HasPlayerWeaponEquipped(AActor* playerContextActor, const FDataTableRowHandle& weaponRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFloatLimits(EYLimitType Type);
    
    UFUNCTION(BlueprintCallable)
    static void GetActorsInRadius(AActor* Instigator, float Radius, UClass* TargetClass, TArray<AActor*>& foundActors, bool sortedByDistance, bool excludeInstigator, bool DrawDebugSphere);
    
    UFUNCTION(BlueprintCallable)
    static FName FindWeaponSecondaryAttachementSocketName(FDataTableRowHandle baseRowHandle);
    
    UFUNCTION(BlueprintCallable)
    static void FindSuitableModsForItemForSlot(UObject* objectContext, FDataTableRowHandle weaponRow, EYModificationSlotType Type, TArray<FName>& outModRowNames);
    
    UFUNCTION(BlueprintCallable)
    static bool FindStoredWeaponInformationFromSlot(UObject* relevantContext, int32 Index, FYStoredInventoryWeaponData& outData);
    
    UFUNCTION(BlueprintCallable)
    static USoundBase* FindReloadSound(UActorComponent* playerRelevantComponent, int32 reloadSoundIndex);
    
    UFUNCTION(BlueprintCallable)
    static UYWeaponPlayerControllerRuntimeComponent* FindPlayerControllerWeaponRuntimeComponent(UObject* playerContext);
    
    UFUNCTION(BlueprintCallable)
    static UYPlayerCharacterWeaponComponent* FindPlayerCharacterWeaponComponent(UObject* playerContext);
    
    UFUNCTION(BlueprintCallable)
    static UYPersistentWeaponDataComponent* FindPersistentWeaponDataComponent(UObject* playerContext);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindAmmoInClipFromRow(AActor* actorContext, const FDataTableRowHandle& weaponRowHandle);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindAmmoInClipFromInventoryItem(const FYInventoryItem& inventoryItem);
    
    UFUNCTION(BlueprintCallable)
    static bool FindActiveWeaponStoredInformation(AActor* actorContext, FYStoredInventoryWeaponData& outStoredData);
    
    UFUNCTION(BlueprintCallable)
    static bool FindActiveWeaponInventoryItem(AActor* actorContext, FYInventoryItem& OutItem);
    
    UFUNCTION(BlueprintCallable)
    static FYActiveWeaponCharacterInitializationData CreateCharacterInitializationDataFromStoredData(const FYStoredInventoryWeaponData& inData);
    
};

