#pragma once
#include "CoreMinimal.h"
#include "EYVivoxAudioFadeModel.h"
#include "YChannelProximityChatSettings.generated.h"

USTRUCT(BlueprintType)
struct FYChannelProximityChatSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isProximityVoiceChatEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_audibleDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_conversationalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_audioFadeIntensityByDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYVivoxAudioFadeModel m_audioFadeModel;
    
    PROSPECT_API FYChannelProximityChatSettings();
};

