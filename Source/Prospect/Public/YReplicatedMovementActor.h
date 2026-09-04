#pragma once
#include "CoreMinimal.h"
#include "YReplicatedMovementActor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FYReplicatedMovementActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_actorBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_actorOffset;
    
    PROSPECT_API FYReplicatedMovementActor();
};

