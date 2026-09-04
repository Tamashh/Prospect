#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "HipAdjustment.generated.h"

USTRUCT(BlueprintType)
struct FHipAdjustment {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference Hips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdjustmentRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRecoveryRate;
    
    STRIDER_API FHipAdjustment();
};

