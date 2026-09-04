#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "YReplicationGraphNode_PlayerStateFrequencyLimiter.generated.h"

UCLASS(Blueprintable, NonTransient)
class UYReplicationGraphNode_PlayerStateFrequencyLimiter : public UReplicationGraphNode {
    GENERATED_BODY()
public:
    UYReplicationGraphNode_PlayerStateFrequencyLimiter();

};

