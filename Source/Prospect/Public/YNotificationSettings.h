#pragma once
#include "CoreMinimal.h"
#include "EYFriendState.h"
#include "Engine/DataAsset.h"
#include "EYNotifcationType.h"
#include "YFriendActionMuteSettings.h"
#include "YNotificationSettings.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYNotificationSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYNotifcationType> m_notificationsShowSocialDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYNotifcationType> m_notificationsToDisregardMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_maximumAmountOfNotifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_maxNumbersToTrackRecentlyPlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_shrinkNumberRecentlyPlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minAllowedNewSearchTimeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYFriendState, FYFriendActionMuteSettings> m_actionMuteSettings;
    
    UYNotificationSettings();

};

