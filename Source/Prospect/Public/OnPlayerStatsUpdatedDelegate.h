#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "MatchStatsMapWrapper.h"
#include "OnPlayerStatsUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerStatsUpdated, const FUniqueNetIdRepl&, internalUserId, const FMatchStatsMapWrapper&, playerMatchStats);

