#pragma once
#include "CoreMinimal.h"
#include "EYPlayerAwarenessNotificationType.h"
#include "YPlayerAwarenessNotificationData.generated.h"

class AYPlayerCharacter;

USTRUCT(BlueprintType)
struct FYPlayerAwarenessNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isAuthorityTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_shouldPlayVo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_shouldPlaySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPlayerAwarenessNotificationType m_notficationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AYPlayerCharacter> m_playerCharacterContext;
    
    PROSPECT_API FYPlayerAwarenessNotificationData();
};

