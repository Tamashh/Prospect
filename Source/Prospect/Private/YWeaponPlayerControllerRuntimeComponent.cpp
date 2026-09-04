#include "YWeaponPlayerControllerRuntimeComponent.h"
#include "Net/UnrealNetwork.h"

UYWeaponPlayerControllerRuntimeComponent::UYWeaponPlayerControllerRuntimeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ammoInClip = 0;
    this->m_ammoConsumptionPendingInPercent = 0.0f;
    this->m_activeWeaponIndex = -1;
    this->m_weaponTransportHandle = -1;
    this->m_characterStateComponent = NULL;
    this->m_characterWeaponComponent = NULL;
    this->m_characterMovementComponent = NULL;
    this->m_controllerInputStateComponent = NULL;
    this->m_characterStaminaComponent = NULL;
    this->m_characterMeleeComponent = NULL;
    this->m_controllerAbilityComponent = NULL;
    this->m_characterGPAComponent = NULL;
    this->m_characterPerkComponent = NULL;
    this->m_ScriptableComponent = NULL;
    this->m_locallyWeaponTransportHandleUsed = false;
    this->m_maxFovConsideredAsScoped = 25.0f;
    this->m_adsSensitivityMultiplierScaling = 1.0f;
    this->m_scopedSensitivityMultiplierScaling = 1.64999998f;
    this->m_minTimeIntervalAllowedBetweenFireRPCS = 0.00100000005f;
}

void UYWeaponPlayerControllerRuntimeComponent::TryFireNewBurstShot() {
}

void UYWeaponPlayerControllerRuntimeComponent::TimestampValidationTimer() {
}

void UYWeaponPlayerControllerRuntimeComponent::StartMeleeHeavySpinup() {
}

bool UYWeaponPlayerControllerRuntimeComponent::ShouldCrosshairTrackSocketRotation() const {
    return false;
}

void UYWeaponPlayerControllerRuntimeComponent::SetReticleDisabled(bool newState) {
}

void UYWeaponPlayerControllerRuntimeComponent::ServerFireWeaponWithSeed_Implementation(const TArray<FYFireTransportEntry>& fireWeaponTransportEntry, int32 RandomSeed, float timestampClient, const TArray<FVector_NetQuantize>& Vectors) {
}
bool UYWeaponPlayerControllerRuntimeComponent::ServerFireWeaponWithSeed_Validate(const TArray<FYFireTransportEntry>& fireWeaponTransportEntry, int32 RandomSeed, float timestampClient, const TArray<FVector_NetQuantize>& Vectors) {
    return true;
}

void UYWeaponPlayerControllerRuntimeComponent::ServerFireHitscanResults_Implementation(const TArray<FYHitscanTraceEntry>& traceEntries, float timestampClient) {
}
bool UYWeaponPlayerControllerRuntimeComponent::ServerFireHitscanResults_Validate(const TArray<FYHitscanTraceEntry>& traceEntries, float timestampClient) {
    return true;
}

void UYWeaponPlayerControllerRuntimeComponent::ReloadReleaseInput() {
}

void UYWeaponPlayerControllerRuntimeComponent::ReloadInput() {
}

void UYWeaponPlayerControllerRuntimeComponent::OnTransportComponentDestroyed(int32 transportHandle) {
}

void UYWeaponPlayerControllerRuntimeComponent::OnStopTargeting(bool wasInterupted) {
}

void UYWeaponPlayerControllerRuntimeComponent::OnStopSpinning(bool wasInterupted) {
}

void UYWeaponPlayerControllerRuntimeComponent::OnStopSliding(bool wasInterupted) {
}

void UYWeaponPlayerControllerRuntimeComponent::OnStopReloadingAmmo(bool wasInterrupted) {
}

void UYWeaponPlayerControllerRuntimeComponent::OnStopReloading(bool wasInterupted) {
}

void UYWeaponPlayerControllerRuntimeComponent::OnStopMeleeHeavy(bool wasInterupted) {
}

void UYWeaponPlayerControllerRuntimeComponent::OnStopMelee(bool wasInterupted) {
}

void UYWeaponPlayerControllerRuntimeComponent::OnStopFiring(bool wasInterupted) {
}

void UYWeaponPlayerControllerRuntimeComponent::OnStartWeaponSwitch() {
}

void UYWeaponPlayerControllerRuntimeComponent::OnStartTargeting() {
}

void UYWeaponPlayerControllerRuntimeComponent::OnStartSliding() {
}

void UYWeaponPlayerControllerRuntimeComponent::OnStartReloadingAmmo() {
}

void UYWeaponPlayerControllerRuntimeComponent::OnStartReloading() {
}

void UYWeaponPlayerControllerRuntimeComponent::OnStartFiring() {
}

void UYWeaponPlayerControllerRuntimeComponent::OnRep_WeaponTransportHandle() {
}

void UYWeaponPlayerControllerRuntimeComponent::OnRep_StoredMods() {
}

void UYWeaponPlayerControllerRuntimeComponent::OnRep_AdditionalRemainingAmmo() {
}

void UYWeaponPlayerControllerRuntimeComponent::OnRep_ActiveDataTableRow() {
}

void UYWeaponPlayerControllerRuntimeComponent::OnPlayerStateChanged() {
}

void UYWeaponPlayerControllerRuntimeComponent::OnPerksChanged() {
}

void UYWeaponPlayerControllerRuntimeComponent::OnPawnAssigned(APawn* oldPawn, APawn* newPawn) {
}

void UYWeaponPlayerControllerRuntimeComponent::OnMeleeAttackFinished() {
}

void UYWeaponPlayerControllerRuntimeComponent::OnItemUpdatedCallback(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item, EYPlayerSetType equippedSetType) {
}

void UYWeaponPlayerControllerRuntimeComponent::OnItemDroppedCallback(UYPlayerDropComponent* playerDropComponent, const FYInventoryItem& Item, EYLootSourceType lootType) {
}

void UYWeaponPlayerControllerRuntimeComponent::OnItemAddedCallback(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item, EYPlayerSetType equippedSetType) {
}

void UYWeaponPlayerControllerRuntimeComponent::OnInventoryUpdate(UYStateInventoryComponent* inventoryComponent) {
}

void UYWeaponPlayerControllerRuntimeComponent::OnInventoryStateActivated() {
}

void UYWeaponPlayerControllerRuntimeComponent::OnInputModeChanged(bool isUIOnly) {
}

void UYWeaponPlayerControllerRuntimeComponent::OnFinishedTargeting() {
}

void UYWeaponPlayerControllerRuntimeComponent::OnFinishedAmmoReloading() const {
}

void UYWeaponPlayerControllerRuntimeComponent::OnAnyStateChanged(EYStateChangeType stateChange, const TArray<EYPlayerStateBlueprint>& statesThatChanged) {
}

void UYWeaponPlayerControllerRuntimeComponent::MeleeReFire() {
}

bool UYWeaponPlayerControllerRuntimeComponent::IsFullscreenCrosshairEnabled(AActor* actorContext) {
    return false;
}

bool UYWeaponPlayerControllerRuntimeComponent::HideGunWhileFinishedTargeting() const {
    return false;
}

bool UYWeaponPlayerControllerRuntimeComponent::GetShouldCrosshairTrackSocketLocation() const {
    return false;
}

float UYWeaponPlayerControllerRuntimeComponent::GetCurrentWeaponUseCooldown() const {
    return 0.0f;
}

FTransform UYWeaponPlayerControllerRuntimeComponent::GetCurrentShootAtSocketLocationAndRotationPreTransform() {
    return FTransform{};
}

FTransform UYWeaponPlayerControllerRuntimeComponent::GetCurrentShootAtSocketLocationAndRotation() {
    return FTransform{};
}

FVector UYWeaponPlayerControllerRuntimeComponent::GetCurrentPawnCameraLocation() {
    return FVector{};
}

FVector UYWeaponPlayerControllerRuntimeComponent::GetCurrentPawnCameraForwardVector() {
    return FVector{};
}

FDataTableRowHandle UYWeaponPlayerControllerRuntimeComponent::GetCurrentActiveWeaponRowHandle() {
    return FDataTableRowHandle{};
}

FVector UYWeaponPlayerControllerRuntimeComponent::GetCameraLocationPreTransform() {
    return FVector{};
}

FVector UYWeaponPlayerControllerRuntimeComponent::GetCameraLocation() {
    return FVector{};
}

FVector2D UYWeaponPlayerControllerRuntimeComponent::GetAppliedRecoilForWeaponAnimation() const {
    return FVector2D{};
}

FVector2D UYWeaponPlayerControllerRuntimeComponent::GetAppliedRecoilForUI() const {
    return FVector2D{};
}

FDataTableRowHandle UYWeaponPlayerControllerRuntimeComponent::GetAISenseOnFired() {
    return FDataTableRowHandle{};
}

void UYWeaponPlayerControllerRuntimeComponent::FireWeaponReleaseInput() {
}

void UYWeaponPlayerControllerRuntimeComponent::FireWeaponInput() {
}

void UYWeaponPlayerControllerRuntimeComponent::FireWeaponAfterFireDelay() {
}

void UYWeaponPlayerControllerRuntimeComponent::FireRateHackTimer() {
}

bool UYWeaponPlayerControllerRuntimeComponent::FireMeleeWeaponInputInternal() {
    return false;
}

FDataTableRowHandle UYWeaponPlayerControllerRuntimeComponent::FindActiveWeaponHandle() const {
    return FDataTableRowHandle{};
}

void UYWeaponPlayerControllerRuntimeComponent::FillUpSingleBullet() {
}

void UYWeaponPlayerControllerRuntimeComponent::FillUpAmmo() {
}

TArray<FDataTableRowHandle> UYWeaponPlayerControllerRuntimeComponent::DetermineScannableRowHandles() const {
    return TArray<FDataTableRowHandle>();
}

void UYWeaponPlayerControllerRuntimeComponent::ClientPlayWeaponSound_Implementation(const TSoftObjectPtr<USoundBase>& weaponSound, UYPlayerCharacterWeaponComponent* weaponComponent) {
}

void UYWeaponPlayerControllerRuntimeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYWeaponPlayerControllerRuntimeComponent, m_activeWeaponStoredInformation);
    DOREPLIFETIME(UYWeaponPlayerControllerRuntimeComponent, m_weaponModsData);
    DOREPLIFETIME(UYWeaponPlayerControllerRuntimeComponent, m_weaponTransportHandle);
}


