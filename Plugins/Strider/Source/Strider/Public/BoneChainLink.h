#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "BoneChainLink.generated.h"

USTRUCT(BlueprintType)
struct FBoneChainLink {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference Bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float weight;
    
    STRIDER_API FBoneChainLink();
};

