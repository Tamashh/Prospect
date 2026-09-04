#pragma once
#include "CoreMinimal.h"
#include "YPlatformEntry.h"
#include "YOnRequestSocialProfilesSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnRequestSocialProfilesSignature, const TArray<FYPlatformEntry>&, entries, int32, requestHandle);

