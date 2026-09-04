#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YNewsItemButtonData.h"
#include "YNewsItemLocalizedString.h"
#include "YNewsItemOfferData.h"
#include "YNewsItemUIData.generated.h"

USTRUCT(BlueprintType)
struct FYNewsItemUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYNewsItemLocalizedString m_headline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYNewsItemLocalizedString m_subheadline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYNewsItemLocalizedString m_mainText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYNewsItemLocalizedString m_actionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYNewsItemLocalizedString m_additionalText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYNewsItemLocalizedString m_previewImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYNewsItemLocalizedString m_mainImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYNewsItemLocalizedString m_backgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime m_countdownDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYNewsItemOfferData> m_itemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYNewsItemButtonData> m_buttonData;
    
    PROSPECT_API FYNewsItemUIData();
};

