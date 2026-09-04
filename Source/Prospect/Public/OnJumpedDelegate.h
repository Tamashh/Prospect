#pragma once
#include "CoreMinimal.h"
#include "OnJumpedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJumped, int32, jumpCount);

