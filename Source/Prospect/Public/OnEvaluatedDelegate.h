#pragma once
#include "CoreMinimal.h"
#include "OnEvaluatedDelegate.generated.h"

class AYActivityLocationLinked;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEvaluated, AYActivityLocationLinked*, Location);

