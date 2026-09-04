#pragma once
#include "CoreMinimal.h"
#include "YTechTreeNodeType.h"
#include "YTechTreeUIData.generated.h"

USTRUCT(BlueprintType)
struct FYTechTreeUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYTechTreeNodeType> columnNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 nodeAmount;
    
    PROSPECT_API FYTechTreeUIData();
};

