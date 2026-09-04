#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYPlayerAwarenessNotificationType.h"
#include "YDataTableRowBase.h"
#include "YPlayerAwarenessNotificationDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerAwarenessNotificationDataTableRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_ignoreLocallyControlled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPlayerAwarenessNotificationType m_notficationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_shouldPlayVo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_notificationVoRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_shouldPlaySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_notificationSoundRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_notificationCooldown;
    
    PROSPECT_API FYPlayerAwarenessNotificationDataTableRow();
};

