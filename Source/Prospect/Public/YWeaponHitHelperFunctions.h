#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YDealtDamageData.h"
#include "YWeaponHitHelperFunctions.generated.h"

UCLASS(Blueprintable)
class UYWeaponHitHelperFunctions : public UObject {
    GENERATED_BODY()
public:
    UYWeaponHitHelperFunctions();

    UFUNCTION(BlueprintCallable)
    static bool HasHealBeenAppliedPredicated(const FYDealtDamageData& Data);
    
};

