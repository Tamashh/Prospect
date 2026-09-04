#include "YPlayerCharacterWeaponComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "YSkeletalMeshComponentFOV.h"

UYPlayerCharacterWeaponComponent::UYPlayerCharacterWeaponComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_widgetComponent = NULL;
    this->m_weaponMesh = CreateDefaultSubobject<UYSkeletalMeshComponentFOV>(TEXT("Weapon_FirstPersonMesh"));
    this->m_spinUpWeaponSoundAudioComponent = NULL;
    this->m_weaponFiringSoundAudioComponent = NULL;
    this->HeavyMeleeSprintSlowdownMultiplier = 0.699999988f;
    this->m_fireParticleSystem = NULL;
    this->m_staticMeshChild = NULL;
    this->m_beamParticleSystem = NULL;
    this->m_spinupParticle = NULL;
    this->m_blockEquip = false;
    this->m_weaponScopeParameterCollection = NULL;
    this->m_visualState = EYWeaponVisualState::Normal;
    this->m_missingAmmo = 0;
}

void UYPlayerCharacterWeaponComponent::SetChildStaticMesh(UYStaticMeshComponentFOV* StaticMesh) {
}

void UYPlayerCharacterWeaponComponent::ServerPopulatePlayOutOfAmmoFX_Implementation() {
}

void UYPlayerCharacterWeaponComponent::ReattachWeaponMeshComponent() {
}

void UYPlayerCharacterWeaponComponent::PlayReloadOutAnimation(const bool wasAmmoEmpty) {
}

void UYPlayerCharacterWeaponComponent::PlayReloadLoopAnimation(const bool wasAmmoEmpty) {
}

void UYPlayerCharacterWeaponComponent::PlayEquipState() {
}

void UYPlayerCharacterWeaponComponent::OnUpdateWeaponSpinup() {
}

void UYPlayerCharacterWeaponComponent::OnStopWeaponSpinup(bool wasInterupted) {
}

void UYPlayerCharacterWeaponComponent::OnStopTargeting(bool wasInterrupted) {
}

void UYPlayerCharacterWeaponComponent::OnStopReloadAnimation(bool wasInterrupted) {
}

void UYPlayerCharacterWeaponComponent::OnStopPlayPlayerAnimationPending(UAnimInstance* characterInstance, UAnimMontage* MontageToPlay) {
}

void UYPlayerCharacterWeaponComponent::OnStopPlayAnimationPending(EYWeaponPlayState weaponState) {
}

void UYPlayerCharacterWeaponComponent::OnStopMeleeHeavy(bool bInterrupted) {
}

void UYPlayerCharacterWeaponComponent::OnStopMelee(bool bInterrupted) {
}

void UYPlayerCharacterWeaponComponent::OnStopHiddenWeaponState(bool wasInterrupted) {
}

void UYPlayerCharacterWeaponComponent::OnStopFiring(bool wasInterupted) {
}

void UYPlayerCharacterWeaponComponent::OnStartWeaponSwitch() {
}

void UYPlayerCharacterWeaponComponent::OnStartWeaponSpinup() {
}

void UYPlayerCharacterWeaponComponent::OnStartTargeting() {
}

void UYPlayerCharacterWeaponComponent::OnStartReloadAnimation() {
}

void UYPlayerCharacterWeaponComponent::OnStartMeleeHeavy() {
}

void UYPlayerCharacterWeaponComponent::OnStartMelee() {
}

void UYPlayerCharacterWeaponComponent::OnStartHiddenWeaponState() {
}

void UYPlayerCharacterWeaponComponent::OnStartFiring() {
}

void UYPlayerCharacterWeaponComponent::OnSpinupPercentChanged(float newPercentage) {
}

void UYPlayerCharacterWeaponComponent::OnSetTargetingWeaponFOV() {
}

void UYPlayerCharacterWeaponComponent::OnRep_VisualState() {
}

void UYPlayerCharacterWeaponComponent::OnRep_ActiveDataTableRow() {
}

void UYPlayerCharacterWeaponComponent::OnMeleeAttackHitResult(bool hitSomething) {
}

void UYPlayerCharacterWeaponComponent::OnFinishedLoadingWeapon(FYActiveWeaponCharacterInitializationData activeWeaponInitData, TArray<FSoftObjectPath> asyncLoadedPaths, const FString& contextString) {
}

void UYPlayerCharacterWeaponComponent::OnCosmeticStateChanged(bool newState) {
}

void UYPlayerCharacterWeaponComponent::OnClearReloadAnimationState() {
}

void UYPlayerCharacterWeaponComponent::MulticastPlayReloadState_Implementation(EYWeaponPlayState weaponState) {
}

void UYPlayerCharacterWeaponComponent::MulticastPlayOutOfAmmoFX_Implementation() {
}

void UYPlayerCharacterWeaponComponent::MulticastPlayFireEndpoint_Implementation(FVector endpoint) {
}

void UYPlayerCharacterWeaponComponent::MulticastPlayFire_Implementation(bool dummyParameterForDemoReplayMuzzles) {
}

void UYPlayerCharacterWeaponComponent::MeleeLooping() {
}

void UYPlayerCharacterWeaponComponent::MeleeHeavyLooping() {
}

bool UYPlayerCharacterWeaponComponent::IsAmmoEmpty() {
    return false;
}

void UYPlayerCharacterWeaponComponent::HandleOnDeath(UYHealthComponent* healthComponent, AActor* Instigator) {
}

EYDeviceCategory UYPlayerCharacterWeaponComponent::GetEquippedWeaponDeviceCategory() {
    return EYDeviceCategory::AssaultRifle;
}

EYEquipedAnimationWeaponType UYPlayerCharacterWeaponComponent::GetEquipedWeaponType() {
    return EYEquipedAnimationWeaponType::Invalid;
}

EYEquipedWeaponPoseType UYPlayerCharacterWeaponComponent::GetEquipedWeaponPose() {
    return EYEquipedWeaponPoseType::Invalid;
}

FYCharacterAnimThirdPerson UYPlayerCharacterWeaponComponent::GetCharacterAnimThirdPerson() {
    return FYCharacterAnimThirdPerson{};
}

FYCharacterAnimFirstPerson UYPlayerCharacterWeaponComponent::GetCharacterAnimFirstPerson() {
    return FYCharacterAnimFirstPerson{};
}

TSubclassOf<UAnimInstance> UYPlayerCharacterWeaponComponent::GetCharacterAnimationAnimLayer() {
    return NULL;
}

float UYPlayerCharacterWeaponComponent::FindUntargetingTime() {
    return 0.0f;
}

float UYPlayerCharacterWeaponComponent::FindTargetingTime() {
    return 0.0f;
}

float UYPlayerCharacterWeaponComponent::FindRetargetingMinimumNormalizedTime() {
    return 0.0f;
}

void UYPlayerCharacterWeaponComponent::FindAllRelevantMeshes(TArray<UMeshComponent*>& OutComponents, bool includeBaseCharacter) {
}

void UYPlayerCharacterWeaponComponent::EarlyExitAnimNotify(UAnimInstance* AnimInstance, UAnimMontage* AnimMontage) {
}

void UYPlayerCharacterWeaponComponent::ClientForceUpdateEquippedWeapon_Implementation() {
}

void UYPlayerCharacterWeaponComponent::BlockEquipState() {
}

void UYPlayerCharacterWeaponComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYPlayerCharacterWeaponComponent, m_activeInstanceData);
    DOREPLIFETIME(UYPlayerCharacterWeaponComponent, m_visualState);
}


