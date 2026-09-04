#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "LimbDefinition.generated.h"

USTRUCT(BlueprintType)
struct FLimbDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference Tip;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference IkTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoneCount;
    
    STRIDER_API FLimbDefinition();
};

