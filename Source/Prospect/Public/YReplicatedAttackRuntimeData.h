#pragma once
#include "CoreMinimal.h"
#include "EYAIAttackStatus.h"
#include "YReplicatedAttackRuntimeData.generated.h"

USTRUCT(BlueprintType)
struct FYReplicatedAttackRuntimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_serverTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_indexRangedAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYAIAttackStatus m_attackStatus;
    
    PROSPECT_API FYReplicatedAttackRuntimeData();
};

