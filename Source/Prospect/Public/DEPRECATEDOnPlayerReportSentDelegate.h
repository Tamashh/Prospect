#pragma once
#include "CoreMinimal.h"
#include "YPlayerReportSubmitData_DEPRECATED.h"
#include "DEPRECATEDOnPlayerReportSentDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDEPRECATEDOnPlayerReportSent, const FYPlayerReportSubmitData_DEPRECATED&, Data);

