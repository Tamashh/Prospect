#pragma once
#include "CoreMinimal.h"
#include "YUserCurrenciesItems.h"
#include "YOnLoadoutPresetPurchaseCurrenciesUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnLoadoutPresetPurchaseCurrenciesUpdated, const TArray<FYUserCurrenciesItems>&, currencies, const FString&, callerContext);
