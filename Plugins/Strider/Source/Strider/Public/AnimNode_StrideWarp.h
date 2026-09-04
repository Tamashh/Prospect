#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "BoneContainer.h"
#include "HipAdjustment.h"
#include "LimbDefinition.h"
#include "StridePivot.h"
#include "AnimNode_StrideWarp.generated.h"

USTRUCT(BlueprintType)
struct STRIDER_API FAnimNode_StrideWarp : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrideScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Twist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllowExtensionPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStridePivot StridePivot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHipAdjustment HipAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLimbDefinition> Limbs;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneReference> AdditionalBonesToAdjustWithHips;
    
    FAnimNode_StrideWarp();
};

