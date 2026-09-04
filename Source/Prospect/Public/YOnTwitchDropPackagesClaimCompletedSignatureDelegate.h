#pragma once
#include "CoreMinimal.h"
#include "EYTwitchDropToastReponseType.h"
#include "YOnTwitchDropPackagesClaimCompletedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnTwitchDropPackagesClaimCompletedSignature, EYTwitchDropToastReponseType, responseType);

