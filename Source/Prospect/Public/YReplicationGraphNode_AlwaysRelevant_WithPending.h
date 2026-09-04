#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "YReplicationGraphNode_AlwaysRelevant_WithPending.generated.h"

UCLASS(Blueprintable, NonTransient)
class PROSPECT_API UYReplicationGraphNode_AlwaysRelevant_WithPending : public UReplicationGraphNode_ActorList {
    GENERATED_BODY()
public:
    UYReplicationGraphNode_AlwaysRelevant_WithPending();

};

