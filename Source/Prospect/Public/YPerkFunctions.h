#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "YStoredRolledPerksData.h"
#include "YPerkFunctions.generated.h"

class AActor;
class UObject;
class UYPerkComponent;

UCLASS(Blueprintable)
class UYPerkFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYPerkFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRolledPerkValueFromRolledRange(const FDataTableRowHandle& rolledPerkRowHandle, float rolledRangeValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool CreateRolledPerkRowHandle(const UObject* WorldContext, FName perkRowName, FDataTableRowHandle& outRowHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool CreatePerkRowHandle(const UObject* WorldContext, FName perkRowName, FDataTableRowHandle& outRowHandle);
    
    UFUNCTION(BlueprintCallable)
    static bool AddRolledPerksToItem(AActor* actorContext, const FString& ItemId, const TArray<FName>& rolledPerkRowNames);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGuid> AddRolledPerksDataToPerkComponent(UYPerkComponent* perkComponent, const FYStoredRolledPerksData& rolledPerksData);
    
};

