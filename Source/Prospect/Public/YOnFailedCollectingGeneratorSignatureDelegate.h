#pragma once
#include "CoreMinimal.h"
#include "EYClaimGeneratorIncomeStatus.h"
#include "YOnFailedCollectingGeneratorSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnFailedCollectingGeneratorSignature, const FString&, generatorId, const EYClaimGeneratorIncomeStatus, claimGeneratorIncomeStatus);

