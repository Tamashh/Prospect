#pragma once
#include "CoreMinimal.h"
#include "YActorScore.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FYActorScore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_score;
    
    PROSPECT_API FYActorScore();
};

