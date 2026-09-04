#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYInteractionType.h"
#include "OnObjectInteractionDetectedDelegate.h"
#include "OnObjectInteractionMessageUpdatedDelegate.h"
#include "OnPlayerInteractionCompletedDelegate.h"
#include "OnPlayerInteractionStartedDelegate.h"
#include "OnPlayerInteractionStoppedDelegate.h"
#include "YEvaluateInteractionTimeNativeDelegate.h"
#include "YInteractionReleaseEntry.h"
#include "YInteractionUpdateData.h"
#include "YObjectInteractionComponent.generated.h"

class AYPlayerState;
class UPrimitiveComponent;
class UYObjectInteractionComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYObjectInteractionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnInteractionComponentDisabled, UYObjectInteractionComponent*, disabledComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCurrentlyBeingInteracted, UYObjectInteractionComponent*, objectInteractionComponent, bool, isCurrentlyBeingInteracted);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYInteractionType m_interactionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_showInteractionWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_disableAfterInteractionCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_displayItemCountOnInteractionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_maxInteractionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_blockMovementWhileInteracting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_maximumAmountOfInteractingPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_requiresPerfectLineOfSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_currentSelectedRelevantInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYInteractionReleaseEntry> m_perfectInteractionReleaseEntries;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerInteractionCompleted OnPlayerInteractionCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerInteractionStarted OnPlayerInteractionStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerInteractionStopped OnPlayerInteractionStopped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYEvaluateInteractionTimeNative OnEvaluateInteractionTimeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectInteractionMessageUpdated OnObjectInteractionMessageUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectInteractionDetected OnObjectInteractionDetected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_notifyAllClients;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentlyBeingInteracted, meta=(AllowPrivateAccess=true))
    bool m_currentlyBeingInteracted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_interactionMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_interactionBlockedMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentInteractingPlayerStates, meta=(AllowPrivateAccess=true))
    TArray<AYPlayerState*> m_currentInteractingPlayerStates;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCurrentlyBeingInteracted BP_OnCurrentlyBeingInteractedWithChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_interactionDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> m_visualizationComponentInteractions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_includeChildsInInteractionVisualization;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_isActive;
    
public:
    UYObjectInteractionComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetInteractionMessage(const FText& newMessage);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool Active);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentlyBeingInteracted();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentInteractingPlayerStates() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnInteractionUpdate(const FYInteractionUpdateData& interactionData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindComponentsToVisualizeInteraction(TArray<UPrimitiveComponent*>& OutComponents) const;
    
    UFUNCTION(BlueprintCallable)
    void AddComponentToVisualizeInteraction(UPrimitiveComponent* PrimitiveComponent);
    
};

