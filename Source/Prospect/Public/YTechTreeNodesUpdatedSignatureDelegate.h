#pragma once
#include "CoreMinimal.h"
#include "YTechTreeNodeStatus.h"
#include "YTechTreeNodesUpdatedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FYTechTreeNodesUpdatedSignature, const FString&, UserId, const TArray<FYTechTreeNodeStatus>&, nodes, const int32&, remainingTimeInSeconds);

