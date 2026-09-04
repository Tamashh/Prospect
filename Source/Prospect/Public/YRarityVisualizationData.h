#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "YRarityVisualizationData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FYRarityVisualizationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor m_color;
    
    PROSPECT_API FYRarityVisualizationData();
};

