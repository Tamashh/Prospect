#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYActivityType.h"
#include "EYEndOfMatchView.h"
#include "EYPlayerMatchFinishedResult.h"
#include "OnEscapeSequenceCompleteDelegateDelegate.h"
#include "OnInputBlockReleasedDelegate.h"
#include "OnNoValidSpectateTargetAvailableDelegate.h"
#include "OnSpectateTargetChangedDelegate.h"
#include "YSpectateComponent.generated.h"

class AActor;
class ACameraActor;
class AYPlayerCharacter;
class AYPlayerController_Match;
class AYPlayerState;
class UYCharacterDeathComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYSpectateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpectateNetworkMaxSmoothUpdateDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpectateNetworkNoSmoothUpdateDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpectateNetworkSimulatedSmoothLocationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpectateNetworkSimulatedSmoothRotationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_onFinishMatchFadeInDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_onSwitchSpectateTargetFadeInDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_evacSwitchToSpectateTimeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_spectateTargetEvacedTimeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_spectateTargetDeadTimeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_setSpectateTargetTimeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_spectatePawnAdjustLocationTimeInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYActivityType m_evacSpectateActivityType;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEscapeSequenceCompleteDelegate BP_OnEscapeSequenceComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpectateTargetChanged BP_OnSpectateTargetChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputBlockReleased BP_OnInputBlockReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNoValidSpectateTargetAvailable BP_OnNoValidSpectateTargetAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_blockInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYPlayerState* m_playerStateToMakeNetRelevant;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYPlayerState* m_cachedSpectateTargetPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_cachedSpectateTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYPlayerController_Match* m_cachedPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACameraActor* m_cachedEndOfMatchResultsScreenCameraActor;
    
public:
    UYSpectateComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ViewPrevPlayer();
    
    UFUNCTION(BlueprintCallable)
    void ViewNextPlayer();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateSpectatePawnLocation();
    
public:
    UFUNCTION(BlueprintCallable)
    void SpectatorZoomOut();
    
    UFUNCTION(BlueprintCallable)
    void SpectatorZoomIn();
    
    UFUNCTION(BlueprintCallable)
    bool SpectateSpecificPlayer(AYPlayerState* PlayerState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetSpectateViewTargetDelayed();
    
    UFUNCTION(BlueprintCallable)
    void OnSpectateTargetMatchFinishedResult(EYPlayerMatchFinishedResult Result);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerMatchFinishedResult(EYPlayerMatchFinishedResult Result);
    
    UFUNCTION(BlueprintCallable)
    void OnNetIrrelivantPlayerCharacterSet(AYPlayerCharacter* newPlayerCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnMatchEscapeSequenceCompleted();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDeath(UYCharacterDeathComponent* deathComponent);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetSpectateTargetPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AYPlayerState* GetSpectateTarget() const;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void EnableNetRelevancyForPlayerState(AYPlayerState* PlayerState);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeToEOMViewTarget(EYEndOfMatchView newViewState);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBackToSpectateViewTarget();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BindToDelegates();
    
};

