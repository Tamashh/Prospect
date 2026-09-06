#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "YFreeLoadout.h"
#include "YFreeLoadoutData.h"
#include "YFreeLoadoutHelperFunctions.generated.h"

class AActor;

UCLASS(Blueprintable)
class UYFreeLoadoutHelperFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYFreeLoadoutHelperFunctions();

    UFUNCTION(BlueprintCallable)
    static bool TryActivateFreeLoadout(AActor* actorContext, bool IsActive);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetUnlockCooldownPercentCompleted(AActor* actorContext);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetFreeLoadoutInfo(AActor* actorContext, FYFreeLoadout& freeLoadout);

    UFUNCTION(BlueprintCallable)
    static bool GetCurrentFreeLoadoutWeight(AActor* actorContext, float& weight, int32& maxWeight, float& weightSafe, int32& maxWeightSafe);

    UFUNCTION(BlueprintCallable)
    static bool GenerateFreeLoadoutDataFromSeed(AActor* actorContext, int32 randomSeed, FYFreeLoadoutData& freeLoadoutData, FDataTableRowHandle& associatedFactionRowHandle);

    UFUNCTION(BlueprintCallable)
    static int32 DetermineMissingStashSlotsToActivateFreeLoadout(AActor* actorContext);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanActivateFreeLoadoutInStation(AActor* actorContext, FDateTime& freeLoadoutCooldownFinishedDateTime);

    UFUNCTION(BlueprintCallable)
    static bool CanActivateFreeLoadout(AActor* actorContext);

};
