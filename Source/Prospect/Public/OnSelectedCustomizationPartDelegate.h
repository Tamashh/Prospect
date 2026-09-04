#pragma once
#include "CoreMinimal.h"
#include "YShowBodyTypeCategoryUpdateData.h"
#include "OnSelectedCustomizationPartDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectedCustomizationPart, FYShowBodyTypeCategoryUpdateData, updateData);

