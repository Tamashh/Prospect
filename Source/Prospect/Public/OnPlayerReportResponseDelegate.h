#pragma once
#include "CoreMinimal.h"
#include "YPlayerReportResponseData.h"
#include "OnPlayerReportResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerReportResponse, const FYPlayerReportResponseData&, responseData);

