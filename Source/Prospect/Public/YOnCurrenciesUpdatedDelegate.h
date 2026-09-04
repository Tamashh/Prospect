#pragma once
#include "CoreMinimal.h"
#include "YUserCurrenciesItems.h"
#include "YOnCurrenciesUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnCurrenciesUpdated, const TArray<FYUserCurrenciesItems>&, currencies, const FString&, callerContext);

