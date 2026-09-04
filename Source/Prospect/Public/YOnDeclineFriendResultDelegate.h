#pragma once
#include "CoreMinimal.h"
#include "YFriendActionResponse.h"
#include "YOnDeclineFriendResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnDeclineFriendResult, bool, successful, const FYFriendActionResponse&, response);

