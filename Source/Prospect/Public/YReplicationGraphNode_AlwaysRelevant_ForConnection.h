#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "YReplicationGraphNode_AlwaysRelevant_ForConnection.generated.h"

class AActor;

UCLASS(Blueprintable, NonTransient)
class UYReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(meta=(AllowPrivateAccess=true))
    AActor* LastPawn;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    TArray<FAlwaysRelevantActorInfo> PastRelevantActors;
    
public:
    UYReplicationGraphNode_AlwaysRelevant_ForConnection();

};

