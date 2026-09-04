#pragma once
#include "CoreMinimal.h"
#include "YSocialProfileEntry.h"
#include "EYNotifcationType.h"
#include "EYNotificationMessageType.h"
#include "YSocialNotification.generated.h"

USTRUCT(BlueprintType)
struct FYSocialNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYSocialProfileEntry m_associatedPlayerEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_overridenMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYNotifcationType m_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYNotificationMessageType m_messageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isPermanent;
    
    PROSPECT_API FYSocialNotification();
};

