#pragma once
#include "CoreMinimal.h"
#include "BoneChainLink.h"
#include "BoneChain.generated.h"

USTRUCT(BlueprintType)
struct FBoneChain {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneChainLink> BoneChain;
    
    STRIDER_API FBoneChain();
};

