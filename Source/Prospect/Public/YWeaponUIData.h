#pragma once
#include "CoreMinimal.h"
#include "EYItemStatsCategory.h"
#include "YWeaponUIData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FYWeaponUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_textureUIIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_textureUISmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_textureUIBig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYItemStatsCategory m_itemStatsCategory;
    
    PROSPECT_API FYWeaponUIData();
};

