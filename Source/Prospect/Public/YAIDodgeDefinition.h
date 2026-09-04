#pragma once
#include "CoreMinimal.h"
#include "YAIDodgeDefinition.generated.h"

USTRUCT(BlueprintType)
struct FYAIDodgeDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_dodgeDamagedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_dodgeMinDot2DToCombatTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_dodgeBlockDurationAfterDodge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_chanceCancelHitReactionByDodge;
    
    PROSPECT_API FYAIDodgeDefinition();
};

