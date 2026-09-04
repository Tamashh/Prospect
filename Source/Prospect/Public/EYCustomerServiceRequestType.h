#pragma once
#include "CoreMinimal.h"
#include "EYCustomerServiceRequestType.generated.h"

UENUM(BlueprintType)
enum class EYCustomerServiceRequestType : uint8 {
    BanAppeal,
    CheatReport,
    OpenQuestion,
    TechnicalSupport,
    ReportPlayer,
    Invalid,
};

