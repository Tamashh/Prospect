#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EYMatchState.h"
#include "EYNotificationPlacement.h"
#include "EYNotificationType.h"
#include "EYPlayerMatchState.h"
#include "OnInputBoundDelegate.h"
#include "OnPlayerLeftMatchDelegate.h"
#include "OnPutPlayerIntoPendingReconnectStateDelegate.h"
#include "OnShowAdditionalHUDDelegate.h"
#include "OnToggleAttachmentScreenSignatureDelegate.h"
#include "YOutpostFriendInfo.h"
#include "YPlayerController.h"
#include "YPlayerController_Match.generated.h"

class AYPlayerState;
class UCurveFloat;
class UYActivityDebugMapMarkerManager;
class UYControllerAudioOcclusionComponent;
class UYControllerInventoryAbilityComponent;
class UYControllerInventoryInteractionComponent;
class UYControllerReplicationComponent;
class UYControllerStationComponent;
class UYPlayerInteractionComponent;
class UYPlayerSocialComponent;
class UYPlayerSocialStationComponent;
class UYSpectateComponent;
class UYWeaponPlayerControllerInventoryComponent;
class UYWeaponPlayerControllerRuntimeComponent;

UCLASS(Blueprintable)
class AYPlayerController_Match : public AYPlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_requestedStationTravel;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerLeftMatch OnPlayerLeftMatch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputBound OnInputBound;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowAdditionalHUD BP_OnShowAdditionalHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isShowingAdditioanlHud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYControllerInventoryInteractionComponent* m_inventoryInteractionComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnToggleAttachmentScreenSignature OnToggleAttachmentScreenEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator m_previousControlRotation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_randomizeWeaponInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_randomizeAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString m_reconnectingPlayerId;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWeaponPlayerControllerRuntimeComponent* m_runtimeWeaponComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWeaponPlayerControllerInventoryComponent* m_inventoryWeaponController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYControllerInventoryAbilityComponent* m_abilityInventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPlayerInteractionComponent* m_playerInteractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYSpectateComponent* m_spectateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPlayerSocialComponent* m_socialComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPlayerSocialStationComponent* m_socialStationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYControllerStationComponent* m_stationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYControllerAudioOcclusionComponent* m_audioOcclusionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYActivityDebugMapMarkerManager* m_debugActivityMapMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_weaponToInitialize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_deviceWeaponToInitialize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_pistolHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_firstAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_secondAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_thirdAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_fourthAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYControllerReplicationComponent* m_controllerReplicationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_damageOverTimeCurve;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_reconnectKickReason;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPutPlayerIntoPendingReconnectState OnPutPlayerIntoPendingReconnectState;
    
public:
    AYPlayerController_Match(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void ToggleZoom();
    
public:
    UFUNCTION(BlueprintCallable)
    void ToggleMuteIncomingVOIP();
    
    UFUNCTION(BlueprintCallable)
    void ToggleMatchInventory();
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void Timeout();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartToLeaveMap();
    
    UFUNCTION(BlueprintCallable)
    void ShowNotification(const FText& Message, FVector colorOverride, float Duration, EYNotificationType notificationType, EYNotificationPlacement notificationImportance);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerTimeout();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerKillPawnDueVoluntaryLeave(bool LeaveSquad);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ToggleZoom();
    
    UFUNCTION(BlueprintCallable)
    void OnReconnectTimeout();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerMatchStateChanged(EYPlayerMatchState newState, AYPlayerState* givenPlayerState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMatchStateUpdated(EYMatchState newMatchState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMatchStarted();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAttachmentScreenInputCallback();
    
    UFUNCTION(BlueprintCallable)
    void LeaveMatch();
    
    UFUNCTION(BlueprintCallable)
    void InitializeLoadout() const;
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void InitializeCamera();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleSquadUpdated(const TArray<FYOutpostFriendInfo>& squadMembers);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AYPlayerState* GetYPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UYSpectateComponent* GetSpectateComponent() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void DoDamageOverTimeEndOfMatch(int32 ElapsedTime);
    
public:
    UFUNCTION(BlueprintCallable)
    bool CloseMatchInventory();
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientLeaveMatch();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearBlockMatchInput();
    
    UFUNCTION(BlueprintCallable)
    void CancelSprintingInput();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_StartDamageOverTime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStartMatchIntro();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_DebugToggleAimAssistInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_DebugSetMatchPhase(FDataTableRowHandle newMatchPhaseRowHandle, int32 visualVariationIndex, bool bForceTransition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float BP_AimAssistAdjustYawInput(float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float BP_AimAssistAdjustPitchInput(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void BlockAllMatchInput();
    
    UFUNCTION(BlueprintCallable)
    void BindToOnPlayerMatchStateChanged(AYPlayerState* givenPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void AddYawInputController(float Val);
    
    UFUNCTION(BlueprintCallable)
    void AddPitchInputController(float Val);
    
};

