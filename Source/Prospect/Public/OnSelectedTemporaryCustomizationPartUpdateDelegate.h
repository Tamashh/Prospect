#pragma once
#include "CoreMinimal.h"
#include "YRequestShowTemporaryNewSelectionData.h"
#include "OnSelectedTemporaryCustomizationPartUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectedTemporaryCustomizationPartUpdate, FYRequestShowTemporaryNewSelectionData, updateData);

