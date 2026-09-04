#pragma once
#include "CoreMinimal.h"
#include "EYChannelType.h"
#include "YMessage.h"
#include "Components/ActorComponent.h"
#include "EYChannelContext.h"
#include "YRefreshActiveChannelsDelegate.h"
#include "YVivoxComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYVivoxComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnVivoxTextMessageReceived, const FYMessage&, Message);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnVivoxChannelLeft, const EYChannelType&, ChannelType, EYChannelContext, Context);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnVivoxChannelJoined, const EYChannelType&, ChannelType, EYChannelContext, Context);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnTryAutoReconnect, const int32, numAttemptsLeft);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnParticipantUpdated, const FString&, PlayerId, const bool, speechDetected);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnMicrophoneInputEnergyChanged, const float, micEnergy);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnMicrophoneInputEnergyChanged OnMicrophoneInputEnergyChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYRefreshActiveChannels OnRefreshCurrentActiveChannels;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_reconnectAttemptsCounter;
    
    UYVivoxComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetActiveVoiceChannel(EYChannelType Channel);
    
    UFUNCTION(BlueprintCallable)
    void OnVivoxInitializationChanged(bool State);
    
};

