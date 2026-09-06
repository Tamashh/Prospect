#pragma once
#include "CoreMinimal.h"
#include "YAIProjectileTransportData.h"
#include "YAIRangedAttackData.h"
#include "YAIDebugRangedAttackInfo.generated.h"

USTRUCT(BlueprintType)
struct FYAIDebugRangedAttackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYAIRangedAttackData m_input;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYAIProjectileTransportData m_result;

    PROSPECT_API FYAIDebugRangedAttackInfo();
};
