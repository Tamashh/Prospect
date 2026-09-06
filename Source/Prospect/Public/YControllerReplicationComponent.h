#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "EYInventoryAudioActionPerformed.h"
#include "EYMatchState.h"
#include "EYPlayerSetType.h"
#include "OnAICombatStartedDelegate.h"
#include "OnAnyPlayerTeleportedDBNODelegate.h"
#include "OnLatencySampleReceivedDelegate.h"
#include "OnSpawnLocationSetDelegate.h"
#include "YAnnouncementPlaybackOptions.h"
#include "YImpactInitializationData.h"
#include "YInventoryItem.h"
#include "YMulticastHitscanReplicationData.h"
#include "YNotificiationDataRequest.h"
#include "YPlayerSpawnLocationInfo.h"
#include "YProjectileImpact.h"
#include "YProjectileInititalizationData.h"
#include "YTeleportData.h"
#include "YControllerReplicationComponent.generated.h"

class AActor;
class AYCharacter;
class AYPickupActor;
class UObject;
class UYMapMarkerData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYControllerReplicationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SelectedSpawnLocation, meta=(AllowPrivateAccess=true))
    FYPlayerSpawnLocationInfo m_selectedSpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_NetworkStabilityIssues, meta=(AllowPrivateAccess=true))
    bool m_hasNetworkStabilityIssues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LatencySample, meta=(AllowPrivateAccess=true))
    int32 m_latencySample;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpawnLocationSet OnSpawnLocationSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAICombatStarted OnAICombatStarted;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLatencySampleReceived OnLatencySampleReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYMapMarkerData* m_mapMarkerData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnyPlayerTeleportedDBNO BP_OnAnyPlayerDBNOTeleported;
    
    UYControllerReplicationComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTestInvalidRPC();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSendProjectileImpact(const FYProjectileImpact& projectileImpact);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSendLatencySample();
    
private:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerSendAcknowledgeUpdate();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPlayCommWheelEvent(FDataTableRowHandle commWheelEntry);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SendNotificationsAllPlayersData(UObject* WorldContext, FYNotificiationDataRequest notificationData);
    
    UFUNCTION(BlueprintCallable)
    void RequestLatencySample();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SelectedSpawnLocation() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NetworkStabilityIssues();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LatencySample();
    
    UFUNCTION(BlueprintCallable)
    void OnMatchStateChanged(EYMatchState matchState);
    
public:
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientTriggerOnItemCountUpdate(AYPickupActor* pickUpActor, int32 newItemAmount);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientShowNotificationData(FYNotificiationDataRequest notificationRequest);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientPlayInventoryMoveAudio(AActor* Owner, const FYInventoryItem& Item, EYPlayerSetType targetSetType, EYInventoryAudioActionPerformed actionPerformed);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientPlayHitscan(FDataTableRowHandle fxCategory, FYMulticastHitscanReplicationData replicatedData);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientPlayCommWheelEvent(AYCharacter* characterPlayingCommWheelEvent, FDataTableRowHandle commWheelEntry);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientPlayClientSideProjectile(AActor* Owner, const TArray<FYProjectileInititalizationData>& initializationData);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientPlayAnnouncementFromDT(FDataTableRowHandle rowHandle, FYAnnouncementPlaybackOptions playbackOptions);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientNotifyAPlayerDBNOTeleported(const FYTeleportData& teleportData);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientApplyImpulseOnPlayer(const FVector& Impulse, const FString& Context);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientAddImpactInternal(const FYImpactInitializationData& replicatedData);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_SendMeleeHitScanHitNotification(AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyImpulseOnPlayer(AActor* actorContext, const FVector& Impulse, const FString& Context);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AISpottedPlayer(AActor* aiActor);

};

