#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "EYInventoryPlace.h"
#include "EYPlayerSetType.h"
#include "YAmmoTypeDataTableRow.h"
#include "YInventoryItem.h"
#include "YUIWeaponAmmoData.h"
#include "YInventoryAmmoFunctions.generated.h"

class AActor;
class UTexture2D;

UCLASS(Blueprintable)
class UYInventoryAmmoFunctions : public UObject {
    GENERATED_BODY()
public:
    UYInventoryAmmoFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TryGetAmmoDataFromInventoryItem(AActor* actorContext, const FYInventoryItem& inventoryItem, FYUIWeaponAmmoData& uiWeaponAmmoData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCompatibleWeaponsForAmmoType(UObject* objectContext, const FName& ammoId, TMap<FString, TSoftObjectPtr<UTexture2D>>& outWeaponData);
    
    UFUNCTION(BlueprintCallable)
    static FName GetAmmoTypeFromSlot(AActor* actorContext, EYPlayerSetType Slot);
    
    UFUNCTION(BlueprintCallable)
    static FName GetAmmoIDFromWeaponRow(const FDataTableRowHandle& rowHandle);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAmmoDatatableRowHandleFromWeaponRowHandle(const FDataTableRowHandle& rowHandle, FDataTableRowHandle& outAmmoRowHandle);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAmmoDataFromId(UObject* objectContext, const FString& ID, FYAmmoTypeDataTableRow& outRowData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAmmoDataFromDataTableRow(FDataTableRowHandle rowHandle, FYAmmoTypeDataTableRow& outRowData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CalculateAmountOfAmmoTypeInInventoryContext(AActor* actorContext, const FName& ammoId, int32& totalAmmoOfTypeInBag, EYInventoryPlace inventoryPlace);
    
};

