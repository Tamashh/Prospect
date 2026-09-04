#include "YControllerReplicationComponent.h"
#include "Net/UnrealNetwork.h"

UYControllerReplicationComponent::UYControllerReplicationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_hasNetworkStabilityIssues = false;
    this->m_latencySample = 0;
    this->m_mapMarkerData = NULL;
}

void UYControllerReplicationComponent::ServerTestInvalidRPC_Implementation() {
}
bool UYControllerReplicationComponent::ServerTestInvalidRPC_Validate() {
    return true;
}

void UYControllerReplicationComponent::ServerSendProjectileImpact_Implementation(const FYProjectileImpact& projectileImpact) {
}
bool UYControllerReplicationComponent::ServerSendProjectileImpact_Validate(const FYProjectileImpact& projectileImpact) {
    return true;
}

void UYControllerReplicationComponent::ServerSendLatencySample_Implementation() {
}
bool UYControllerReplicationComponent::ServerSendLatencySample_Validate() {
    return true;
}

void UYControllerReplicationComponent::ServerSendAcknowledgeUpdate_Implementation() {
}
bool UYControllerReplicationComponent::ServerSendAcknowledgeUpdate_Validate() {
    return true;
}

void UYControllerReplicationComponent::ServerPlayCommWheelEvent_Implementation(FDataTableRowHandle commWheelEntry) {
}
bool UYControllerReplicationComponent::ServerPlayCommWheelEvent_Validate(FDataTableRowHandle commWheelEntry) {
    return true;
}

void UYControllerReplicationComponent::SendNotificationsAllPlayersData(UObject* WorldContext, FYNotificiationDataRequest notificationData) {
}

void UYControllerReplicationComponent::RequestLatencySample() {
}

void UYControllerReplicationComponent::OnRep_SelectedSpawnLocation() const {
}

void UYControllerReplicationComponent::OnRep_NetworkStabilityIssues() {
}

void UYControllerReplicationComponent::OnRep_LatencySample() {
}

void UYControllerReplicationComponent::OnMatchStateChanged(EYMatchState matchState) {
}

void UYControllerReplicationComponent::ClientTriggerOnItemCountUpdate_Implementation(AYPickupActor* pickUpActor, int32 newItemAmount) {
}

void UYControllerReplicationComponent::ClientShowNotificationData_Implementation(FYNotificiationDataRequest notificationRequest) {
}

void UYControllerReplicationComponent::ClientPlayInventoryMoveAudio_Implementation(AActor* Owner, const FYInventoryItem& Item, EYPlayerSetType targetSetType, EYInventoryAudioActionPerformed actionPerformed) {
}

void UYControllerReplicationComponent::ClientPlayHitscan_Implementation(FDataTableRowHandle fxCategory, FYMulticastHitscanReplicationData replicatedData) {
}

void UYControllerReplicationComponent::ClientPlayCommWheelEvent_Implementation(AYCharacter* characterPlayingCommWheelEvent, FDataTableRowHandle commWheelEntry) {
}

void UYControllerReplicationComponent::ClientPlayClientSideProjectile_Implementation(AActor* Owner, const TArray<FYProjectileInititalizationData>& initializationData) {
}

void UYControllerReplicationComponent::ClientPlayAnnouncementFromDT_Implementation(FDataTableRowHandle rowHandle, FYAnnouncementPlaybackOptions playbackOptions) {
}

void UYControllerReplicationComponent::ClientNotifyAPlayerDBNOTeleported_Implementation(const FYTeleportData& teleportData) {
}

void UYControllerReplicationComponent::ClientApplyImpulseOnPlayer_Implementation(const FVector& Impulse, const FString& Context) {
}

void UYControllerReplicationComponent::ClientAddImpactInternal_Implementation(const FYImpactInitializationData& replicatedData) {
}

void UYControllerReplicationComponent::Client_SendMeleeHitScanHitNotification_Implementation(AActor* Owner) {
}

void UYControllerReplicationComponent::ApplyImpulseOnPlayer(AActor* actorContext, const FVector& Impulse, const FString& Context) {
}

void UYControllerReplicationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYControllerReplicationComponent, m_selectedSpawnLocation);
    DOREPLIFETIME(UYControllerReplicationComponent, m_hasNetworkStabilityIssues);
    DOREPLIFETIME(UYControllerReplicationComponent, m_latencySample);
}


