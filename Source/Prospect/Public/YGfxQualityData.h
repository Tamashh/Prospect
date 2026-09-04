#pragma once
#include "CoreMinimal.h"
#include "EYGfxQualityPreset.h"
#include "YGfxQualityData.generated.h"

USTRUCT(BlueprintType)
struct FYGfxQualityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYGfxQualityPreset m_gfxQuality;
    
    PROSPECT_API FYGfxQualityData();
};

