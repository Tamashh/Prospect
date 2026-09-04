#include "YPlayerController_Match.h"
#include "Net/UnrealNetwork.h"
#include "YActivityDebugMapMarkerManager.h"
#include "YControllerAudioOcclusionComponent.h"
#include "YControllerInventoryAbilityComponent.h"
#include "YControllerInventoryInteractionComponent.h"
#include "YControllerReplicationComponent.h"
#include "YControllerStationComponent.h"
#include "YPlayerCameraManager.h"
#include "YPlayerInteractionComponent.h"
#include "YPlayerSocialComponent.h"
#include "YPlayerSocialStationComponent.h"
#include "YSpectateComponent.h"
#include "YWeaponPlayerControllerInventoryComponent.h"
#include "YWeaponPlayerControllerRuntimeComponent.h"

AYPlayerController_Match::AYPlayerController_Match(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCameraManagerClass = AYPlayerCameraManager::StaticClass();
    this->bAutoManageActiveCameraTarget = false;
    this->ClickEventKeys.AddDefaulted(1);
    this->m_requestedStationTravel = false;
    this->m_isShowingAdditioanlHud = false;
    this->m_inventoryInteractionComponent = CreateDefaultSubobject<UYControllerInventoryInteractionComponent>(TEXT("inventoryInteractionComponent"));
    this->m_randomizeWeaponInventory = true;
    this->m_randomizeAbilities = true;
    this->m_runtimeWeaponComponent = CreateDefaultSubobject<UYWeaponPlayerControllerRuntimeComponent>(TEXT("YRuntimeComponent"));
    this->m_inventoryWeaponController = CreateDefaultSubobject<UYWeaponPlayerControllerInventoryComponent>(TEXT("YInventoryComponent"));
    this->m_abilityInventoryComponent = CreateDefaultSubobject<UYControllerInventoryAbilityComponent>(TEXT("AbilityComponent"));
    this->m_playerInteractionComponent = CreateDefaultSubobject<UYPlayerInteractionComponent>(TEXT("YPlayerInteractionComponent"));
    this->m_spectateComponent = CreateDefaultSubobject<UYSpectateComponent>(TEXT("YSpectateComponent"));
    this->m_socialComponent = CreateDefaultSubobject<UYPlayerSocialComponent>(TEXT("PlayerSocialComponent"));
    this->m_socialStationComponent = CreateDefaultSubobject<UYPlayerSocialStationComponent>(TEXT("PlayerSocialStationComponent"));
    this->m_stationComponent = CreateDefaultSubobject<UYControllerStationComponent>(TEXT("PlayerStationComponent"));
    this->m_audioOcclusionComponent = CreateDefaultSubobject<UYControllerAudioOcclusionComponent>(TEXT("ControllerAudioOcclusionComponent"));
    this->m_debugActivityMapMarker = CreateDefaultSubobject<UYActivityDebugMapMarkerManager>(TEXT("YActivityDebugMapMarkerManager"));
    this->m_controllerReplicationComponent = CreateDefaultSubobject<UYControllerReplicationComponent>(TEXT("PlayerReplicatioNComponent"));
    this->m_damageOverTimeCurve = NULL;
}

void AYPlayerController_Match::YDebugGiveRerollTokens(int32 Count) const {
}

void AYPlayerController_Match::ToggleZoom() {
}

void AYPlayerController_Match::ToggleMuteIncomingVOIP() {
}

void AYPlayerController_Match::ToggleMatchInventory() {
}

void AYPlayerController_Match::Timeout() {
}

void AYPlayerController_Match::StartToLeaveMap() {
}

void AYPlayerController_Match::ShowNotificationReplicatedForPlayer(const FText& Message, FVector colorOverride, float Duration, EYNotificationType notificationType, EYNotificationPlacement notificationImportance) {
}

void AYPlayerController_Match::ShowNotification(const FText& Message, FVector colorOverride, float Duration, EYNotificationType notificationType, EYNotificationPlacement notificationImportance) {
}

void AYPlayerController_Match::ServerTimeout_Implementation() {
}

void AYPlayerController_Match::ServerKillPawnDueVoluntaryLeave_Implementation(bool LeaveSquad) {
}

void AYPlayerController_Match::Server_ToggleZoom_Implementation() {
}

void AYPlayerController_Match::PrintChallengesOfType(const TArray<FYCompleteQuestState>& quests, EYMetaMissionType metaMissionType) {
}

void AYPlayerController_Match::OnReconnectTimeout() {
}

void AYPlayerController_Match::OnPlayerMatchStateChanged(EYPlayerMatchState newState, AYPlayerState* givenPlayerState) {
}

void AYPlayerController_Match::OnMatchStateUpdated(EYMatchState newMatchState) {
}

void AYPlayerController_Match::OnMatchStarted_Implementation() {
}

void AYPlayerController_Match::OnAttachmentScreenInputCallback() {
}

void AYPlayerController_Match::LeaveMatch() {
}

void AYPlayerController_Match::InitializeLoadout() const {
}

void AYPlayerController_Match::InitializeCamera() {
}

void AYPlayerController_Match::HandleSquadUpdated(const TArray<FYOutpostFriendInfo>& squadMembers) {
}

AYPlayerState* AYPlayerController_Match::GetYPlayerState() const {
    return NULL;
}

int32 AYPlayerController_Match::GetTeamId() {
    return 0;
}

UYSpectateComponent* AYPlayerController_Match::GetSpectateComponent() const {
    return NULL;
}

void AYPlayerController_Match::DoDamageOverTimeEndOfMatch(int32 ElapsedTime) {
}

void AYPlayerController_Match::DebugSetQuestCount(const FString& questId, int32 Count) {
}

void AYPlayerController_Match::DebugSetQuestCompleted(const FString& questId, int32 Count) {
}

void AYPlayerController_Match::DebugGetQuests() {
}

void AYPlayerController_Match::DebugGetDailyChallenges() {
}

bool AYPlayerController_Match::CloseMatchInventory() {
    return false;
}

void AYPlayerController_Match::ClientLeaveMatch_Implementation() {
}

void AYPlayerController_Match::ClearSocialInput() const {
}

void AYPlayerController_Match::ClearBlockMatchInput() {
}

void AYPlayerController_Match::CancelSprintingInput() {
}

void AYPlayerController_Match::BP_StartDamageOverTime_Implementation() {
}






void AYPlayerController_Match::BlockSocialInput() const {
}

void AYPlayerController_Match::BlockAllMatchInput() {
}

void AYPlayerController_Match::BindToOnPlayerMatchStateChanged(AYPlayerState* givenPlayerState) {
}

void AYPlayerController_Match::AddYawInputController(float Val) {
}

void AYPlayerController_Match::AddPitchInputController(float Val) {
}

void AYPlayerController_Match::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AYPlayerController_Match, m_previousControlRotation);
    DOREPLIFETIME(AYPlayerController_Match, m_reconnectingPlayerId);
}


