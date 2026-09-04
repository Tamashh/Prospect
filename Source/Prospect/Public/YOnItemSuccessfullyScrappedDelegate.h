#pragma once
#include "CoreMinimal.h"
#include "YOnItemSuccessfullyScrappedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnItemSuccessfullyScrapped, const FString&, Error);

