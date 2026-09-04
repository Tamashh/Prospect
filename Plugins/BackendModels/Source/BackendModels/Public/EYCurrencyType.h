#pragma once
#include "CoreMinimal.h"
#include "EYCurrencyType.generated.h"

UENUM(BlueprintType)
enum class EYCurrencyType : uint8 {
    Invalid,
    SoftCurrency,
    HardCurrency,
    RealCurrency,
    InsuranceCurrency,
    MAX,
};

