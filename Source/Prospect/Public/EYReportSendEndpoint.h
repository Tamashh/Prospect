#pragma once
#include "CoreMinimal.h"
#include "EYReportSendEndpoint.generated.h"

UENUM(BlueprintType)
enum class EYReportSendEndpoint : uint8 {
    Zendesk,
    BI,
};

