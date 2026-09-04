#pragma once
#include "CoreMinimal.h"
#include "SingleAnimationPlayData.h"
#include "YDataTableRowBase.h"
#include "YNPCAnimationAssetDataRow.generated.h"

USTRUCT(BlueprintType)
struct FYNPCAnimationAssetDataRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_randomizeEmoteAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSingleAnimationPlayData> m_animationPlayData;
    
    PROSPECT_API FYNPCAnimationAssetDataRow();
};

