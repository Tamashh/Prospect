#pragma once
#include "CoreMinimal.h"
#include "YPlayerReportResponseData_DEPRECATED.h"
#include "DEPRECATEDOnPLayerResponseDataDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDEPRECATEDOnPLayerResponseData, const FYPlayerReportResponseData_DEPRECATED&, Data);

