#pragma once
#include "CoreMinimal.h"
#include "YUserCurrenciesItems.h"
#include "YOnCurrenciesUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnCurrenciesUpdate, const TArray<FYUserCurrenciesItems>&, currencies, const FString&, callerContext);

