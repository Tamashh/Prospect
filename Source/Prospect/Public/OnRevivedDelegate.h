#pragma once
#include "CoreMinimal.h"
#include "OnRevivedDelegate.generated.h"

class AController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRevived, const AController*, Controller);

