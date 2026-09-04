#pragma once
#include "CoreMinimal.h"
#include "CurrentDBNOShieldHealthChangedSignatureDelegate.h"
#include "EYInteractionType.h"
#include "OnEnterDBNODelegate.h"
#include "OnExecutedDelegate.h"
#include "OnLeaveDBNODelegate.h"
#include "OnPreExecutedDelegate.h"
#include "OnPreTeleportDBNODelegate.h"
#include "OnRecoveredDBNODelegate.h"
#include "OnRevivedDelegate.h"
#include "OnTeleportChargsAmountChangedDelegate.h"
#include "OnTeleportedDBNODelegate.h"
#include "OnTeleportedDelegate.h"
#include "OnTeleprtStateChangedDelegate.h"
#include "YDealtDamageData.h"
#include "YResourceComponent.h"
#include "YCharacterDBNOComponent.generated.h"

class AActor;
class AYGameState_Match;
class AYPlayerController;
class AYPlayerController_Match;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYCharacterDBNOComponent : public UYResourceComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeleprtStateChanged OnTeleportStateChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYGameState_Match* m_gameStateMatch;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRevived OnRevived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPreExecuted OnPreExecuted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExecuted OnExecuted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeleported OnTeleported;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnterDBNO OnEnterDBNOEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLeaveDBNO OnLeaveDBNOEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPreTeleportDBNO OnPreTeleportedDBNO;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeleportedDBNO OnTeleportedDBNO;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrentDBNOShieldHealthChangedSignature CurrentDBNOShieldHealthChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeleportChargsAmountChanged BP_OnTeleportChargsAmountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRecoveredDBNO OnRecoveredDBNO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timestampEnteredDBNO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeleportChargesLeftChanged, meta=(AllowPrivateAccess=true))
    int32 m_dbnoTeleportChargesLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DBNOShieldHealth, meta=(AllowPrivateAccess=true))
    float m_dbnoShieldHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_currentDBNOTotalDuration;
    
    UYCharacterDBNOComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TryFadeFromBlackAfterDBNOTeleport();
    
    UFUNCTION(BlueprintCallable)
    void TeleportStopInput();
    
    UFUNCTION(BlueprintCallable)
    void TeleportStartInput();
    
    UFUNCTION(BlueprintCallable)
    void SetDBNOTeleportCharges(int32 chargesAmount);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentDBNOShieldHealth(float shieldHealthValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTeleportToStartLocation();
    
    UFUNCTION(BlueprintCallable)
    void OnTeleportActiveDBNO();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TeleportChargesLeftChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DBNOShieldHealth();
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerTakeDamage(FYDealtDamageData& Data);
    
    UFUNCTION(BlueprintCallable)
    void OnLeaveDBNO(bool wasInterupted);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnInteractionStarted_Revive(EYInteractionType interactionType, AYPlayerController_Match* interactingPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionComplete_Revive(EYInteractionType interactionType, AYPlayerController_Match* interactingPlayer);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEnterRevive();
    
    UFUNCTION(BlueprintCallable)
    void OnEnterDBNO();
    
    UFUNCTION(BlueprintCallable)
    void OnDBNOTimerCompleted();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastOnTeleported();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastOnExecuted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorInDBNO(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDBNOTeleportCharges();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDBNOShieldMaxHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDBNOShieldHealthRation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDBNOShieldCurrentHealth();
    
    UFUNCTION(BlueprintCallable)
    void Execute(AYPlayerController* interactingPlayer, bool perfectInteraction);
    
};

