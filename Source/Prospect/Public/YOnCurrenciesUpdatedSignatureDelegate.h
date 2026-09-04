#pragma once
#include "CoreMinimal.h"
#include "YUserCurrenciesItems.h"
#include "YOnCurrenciesUpdatedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnCurrenciesUpdatedSignature, const TArray<FYUserCurrenciesItems>&, currencies, const FString&, callerContext);

