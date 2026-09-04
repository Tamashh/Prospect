#pragma once
#include "CoreMinimal.h"
#include "YUserCurrenciesItems.h"
#include "YOnCurrenciesAvailableSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnCurrenciesAvailableSignature, const TArray<FYUserCurrenciesItems>&, currencies, const FString&, callerContaxt);

