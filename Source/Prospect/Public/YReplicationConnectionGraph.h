#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "YReplicationConnectionGraph.generated.h"

class UYReplicationGraphNode_AlwaysRelevant_ForConnection;
class UYReplicationGraphNode_AlwaysRelevant_ForOwner;
class UYReplicationGraphNode_AlwaysRelevant_ForTeam;

UCLASS(Blueprintable, NonTransient)
class PROSPECT_API UYReplicationConnectionGraph : public UNetReplicationGraphConnection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYReplicationGraphNode_AlwaysRelevant_ForConnection* AlwaysRelevant_ForConnection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYReplicationGraphNode_AlwaysRelevant_ForTeam* TeamConnectionNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYReplicationGraphNode_AlwaysRelevant_ForOwner* OwnerConnectionNode;
    
    UYReplicationConnectionGraph();

};

