#pragma once
#include "CoreMinimal.h"
#include "YRequestShowNewCustomizationData.h"
#include "OnSelectedNewCustomizationRowHandleDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectedNewCustomizationRowHandle, FYRequestShowNewCustomizationData, updateData);

