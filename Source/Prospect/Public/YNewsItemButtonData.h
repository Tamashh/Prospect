#pragma once
#include "CoreMinimal.h"
#include "FYNewsItemUIButtonActionType.h"
#include "YNewsItemLocalizedString.h"
#include "YNewsItemButtonData.generated.h"

USTRUCT(BlueprintType)
struct FYNewsItemButtonData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYNewsItemLocalizedString m_buttonCaption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYNewsItemUIButtonActionType m_buttonActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYNewsItemLocalizedString m_buttonActionParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_buttonActionMarkRead;
    
    PROSPECT_API FYNewsItemButtonData();
};

