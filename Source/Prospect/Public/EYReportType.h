#pragma once
#include "CoreMinimal.h"
#include "EYReportType.generated.h"

UENUM(BlueprintType)
enum class EYReportType : uint8 {
    None,
    ReportPlayer,
    CustomerService,
};

