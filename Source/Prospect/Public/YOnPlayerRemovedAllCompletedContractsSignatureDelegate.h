#pragma once
#include "CoreMinimal.h"
#include "YOnPlayerRemovedAllCompletedContractsSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnPlayerRemovedAllCompletedContractsSignature, const FString&, UserId);

