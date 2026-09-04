#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "YReplicationGraph.generated.h"

class UReplicationGraphNode_ActorList;
class UReplicationGraphNode_GridSpatialization2D;
class UYReplicationGraphNode_PlayerStateFrequencyLimiter;

UCLASS(Blueprintable, NonTransient)
class PROSPECT_API UYReplicationGraph : public UReplicationGraph {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> NonSpatializedChildClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> SpatializedChildClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode_GridSpatialization2D* GridSpatializationNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode_ActorList* AlwaysRelevantNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYReplicationGraphNode_PlayerStateFrequencyLimiter* PlayerStateFrequencyLimiterNode;
    
    UYReplicationGraph();

};

