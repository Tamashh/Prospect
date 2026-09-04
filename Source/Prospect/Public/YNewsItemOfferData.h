#pragma once
#include "CoreMinimal.h"
#include "YNewsItemLocalizedString.h"
#include "YNewsItemOfferData.generated.h"

USTRUCT(BlueprintType)
struct FYNewsItemOfferData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_itemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYNewsItemLocalizedString m_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYNewsItemLocalizedString> m_tags;
    
    PROSPECT_API FYNewsItemOfferData();
};

