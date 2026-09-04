#pragma once
#include "CoreMinimal.h"
#include "YCarrouselData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FYCarrouselData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_headline;
    
    PROSPECT_API FYCarrouselData();
};

