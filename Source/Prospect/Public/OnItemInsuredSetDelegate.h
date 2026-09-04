#pragma once
#include "CoreMinimal.h"
#include "EYInsuranceType.h"
#include "EYInsuranceStatus.h"
#include "OnItemInsuredSetDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemInsuredSet, EYInsuranceType, insurance, EYInsuranceStatus, Status);

