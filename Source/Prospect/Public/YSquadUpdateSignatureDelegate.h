#pragma once
#include "CoreMinimal.h"
#include "YOutpostFriendInfo.h"
#include "YSquadUpdateSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYSquadUpdateSignature, const TArray<FYOutpostFriendInfo>&, squadMemberInfos);

