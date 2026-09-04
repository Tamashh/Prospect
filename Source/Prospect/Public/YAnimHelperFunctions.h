#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YAnimHelperFunctions.generated.h"

class UAnimInstance;
class UAnimMontage;

UCLASS(Blueprintable)
class UYAnimHelperFunctions : public UObject {
    GENERATED_BODY()
public:
    UYAnimHelperFunctions();

private:
    UFUNCTION(BlueprintCallable)
    static bool PlayMontageRatedScaledToMatchDuration(UAnimInstance* animtInstance, UAnimMontage* AnimMontage, float durationToMatch, float& outPlayRate, float playRateMin, float playRateMax);
    
};

