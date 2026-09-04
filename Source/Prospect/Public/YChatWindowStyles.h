#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "Styling/SlateBrush.h"
#include "YChatWindowStyles.generated.h"

USTRUCT(BlueprintType)
struct FYChatWindowStyles {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle Buttonlook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ChatBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush InputBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ChatUserMenuBackground;
    
    PROSPECT_API FYChatWindowStyles();
};

