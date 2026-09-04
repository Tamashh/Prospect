#pragma once
#include "CoreMinimal.h"
#include "EYRewardResult.h"
#include "YRewardsSent.generated.h"

USTRUCT(BlueprintType)
struct FYRewardsSent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYRewardResult Status;
    
    BACKENDMODELS_API FYRewardsSent();
};

