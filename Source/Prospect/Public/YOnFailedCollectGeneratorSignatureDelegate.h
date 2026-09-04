#pragma once
#include "CoreMinimal.h"
#include "EYClaimGeneratorIncomeStatus.h"
#include "YOnFailedCollectGeneratorSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnFailedCollectGeneratorSignature, const FString&, generatorId, const EYClaimGeneratorIncomeStatus, claimGeneratorIncomeStatus);

