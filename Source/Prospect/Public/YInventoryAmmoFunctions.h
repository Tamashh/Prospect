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

UCLASS(Blueprintable)
class UYInventoryAmmoFunctions : public UObject {
    GENERATED_BODY()
public:
    UYInventoryAmmoFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TryGetAmmoDataFromInventoryItem(AActor* actorContext, const FYInventoryItem& inventoryItem, FYUIWeaponAmmoData& uiWeaponAmmoData);
    
    UFUNCTION(BlueprintCallable)
    static FName GetAmmoTypeFromSlot(AActor* actorContext, EYPlayerSetType Slot);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FDataTableRowHandle GetAmmoRowByWeaponID(UObject* WorldContextObject, FName RowName);

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

