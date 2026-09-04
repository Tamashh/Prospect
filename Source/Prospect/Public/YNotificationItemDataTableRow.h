#pragma once
#include "CoreMinimal.h"
#include "EYNotificationMessageType.h"
#include "YDataTableRowBase.h"
#include "YNotificationItemDataTableRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FYNotificationItemDataTableRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYNotificationMessageType m_messageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_textureToShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_message;
    
    PROSPECT_API FYNotificationItemDataTableRow();
};

