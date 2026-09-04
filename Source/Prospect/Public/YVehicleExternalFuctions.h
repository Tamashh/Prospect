#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "YInventoryItem.h"
#include "YVehicleRowBase.h"
#include "YVehicleExternalFuctions.generated.h"

class AActor;
class AYVehicle;

UCLASS(Blueprintable)
class PROSPECT_API UYVehicleExternalFuctions : public UObject {
    GENERATED_BODY()
public:
    UYVehicleExternalFuctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FYVehicleRowBase FindVehicleDataFromRowHandle(FDataTableRowHandle newRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDataTableRowHandle FindMovementSoundHandleFromVehicle(FYInventoryItem Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindEquippedVehicleInventoryItem(AActor* relevantContext, FYInventoryItem& OutItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftClassPtr<AYVehicle> FindDesiredVehicleClassFromInventoryItem(FYInventoryItem inventoryItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDataTableRowHandle FindBoostSoundHandleFromVehicle(FYInventoryItem Item);
    
};

