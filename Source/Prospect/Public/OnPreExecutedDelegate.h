#pragma once
#include "CoreMinimal.h"
#include "OnPreExecutedDelegate.generated.h"

class AController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPreExecuted, const AController*, Controller);

