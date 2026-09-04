#pragma once
#include "CoreMinimal.h"
#include "YUserCurrenciesItems.h"
#include "YOnCurrenciesAddedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnCurrenciesAdded, const TArray<FYUserCurrenciesItems>&, currencies, const FString&, callerContext);

