#pragma once
#include "CoreMinimal.h"
#include "EYInsuranceType.h"
#include "UObject/Object.h"
#include "EYPlayerSetType.h"
#include "YInsuranceFunctions.generated.h"

UCLASS(Blueprintable)
class UYInsuranceFunctions : public UObject {
    GENERATED_BODY()
public:
    UYInsuranceFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSetTypeInsurable(EYPlayerSetType setType);
    
    UFUNCTION(BlueprintCallable)
    static EYInsuranceType ConvertStringToInsuranceType(const FString& insuranceAsString);
    
};

