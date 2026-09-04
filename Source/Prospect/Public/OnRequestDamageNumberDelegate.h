#pragma once
#include "CoreMinimal.h"
#include "YDamageNumberData.h"
#include "OnRequestDamageNumberDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRequestDamageNumber, FYDamageNumberData, Data);

