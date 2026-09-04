#pragma once
#include "CoreMinimal.h"
#include "EYCharacterVanityResetRequest.h"
#include "OnResetRequestDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnResetRequest, EYCharacterVanityResetRequest, resetRequest);

