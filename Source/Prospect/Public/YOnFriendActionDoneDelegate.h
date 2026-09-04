#pragma once
#include "CoreMinimal.h"
#include "YFriendAction.h"
#include "YOnFriendActionDoneDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnFriendActionDone, const TArray<FYFriendAction>&, actions);

