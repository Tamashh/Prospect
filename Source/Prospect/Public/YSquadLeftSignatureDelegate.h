#pragma once
#include "CoreMinimal.h"
#include "YOutpostFriendInfo.h"
#include "YSquadLeftSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYSquadLeftSignature, const FYOutpostFriendInfo&, squadMemberInfo);

