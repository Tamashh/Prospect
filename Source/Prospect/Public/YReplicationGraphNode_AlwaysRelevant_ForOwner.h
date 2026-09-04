#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "YReplicationGraphNode_AlwaysRelevant_ForOwner.generated.h"

UCLASS(Blueprintable, NonTransient)
class PROSPECT_API UYReplicationGraphNode_AlwaysRelevant_ForOwner : public UReplicationGraphNode_AlwaysRelevant_ForConnection {
    GENERATED_BODY()
public:
    UYReplicationGraphNode_AlwaysRelevant_ForOwner();

};

