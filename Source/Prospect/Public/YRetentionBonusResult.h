#pragma once
#include "CoreMinimal.h"
#include "YRetentionProgress.h"
#include "YRetentionBonusResult.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYRetentionBonusResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYRetentionProgress playerData;
    
    FYRetentionBonusResult();
};

