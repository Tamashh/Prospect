#pragma once
#include "CoreMinimal.h"
#include "YCraftSuccessfulPopupText.generated.h"

USTRUCT(BlueprintType)
struct FYCraftSuccessfulPopupText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_itemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_deviceTypeText;
    
    PROSPECT_API FYCraftSuccessfulPopupText();
};

