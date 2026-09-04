#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "EYNotificationPlacement.h"
#include "EYNotificationType.h"
#include "YNotificiationDataRequest.generated.h"

USTRUCT(BlueprintType)
struct FYNotificiationDataRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor m_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYNotificationType m_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYNotificationPlacement m_placement;
    
    PROSPECT_API FYNotificiationDataRequest();
};

