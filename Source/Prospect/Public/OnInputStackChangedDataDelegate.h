#pragma once
#include "CoreMinimal.h"
#include "EYInputUIStackType.h"
#include "OnInputStackChangedDataDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInputStackChangedData, EYInputUIStackType, Type);

