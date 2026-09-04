#include "YPlayerCharacter.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Camera/CameraComponent.h"
#include "Net/UnrealNetwork.h"
#include "YArmorComponent.h"
#include "YCharacterBagComponent.h"
#include "YCharacterCustomizationComponent.h"
#include "YCharacterEmoteComponent.h"
#include "YCharacterLocationComponent.h"
#include "YCommWheelVOComponent.h"
#include "YFallingDamageComponent.h"
#include "YFootstepComponent.h"
#include "YLedgeClimbingComponent.h"
#include "YObjectInteractionComponent.h"
#include "YPlayerCharacterStateComponent.h"
#include "YPlayerCharacterWeaponComponent.h"
#include "YPlayerDropComponent.h"
#include "YPlayerMapMarkerComponent.h"
#include "YPlayerMovementComponent.h"
#include "YSkeletalMeshComponentFOV.h"
#include "YStaminaComponent.h"

AYPlayerCharacter::AYPlayerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UYPlayerMovementComponent>(TEXT("CharMoveComp"))) {
    this->bShouldNeverSeamlessTravel = true;
    this->m_isJumpInputEnabled = false;
    this->m_maxDistanceDBNOReviveInteraction = 150.0f;
    this->m_maxDistanceSocialInteraction = 300.0f;
    this->m_overridenViewState = EYMeshViewState::NoneAssigned;
    this->m_isPendingReconnect = false;
    this->m_firstPersonMesh = CreateDefaultSubobject<UYSkeletalMeshComponentFOV>(TEXT("FirstPersonMesh"));
    this->m_characterWeaponComponent = CreateDefaultSubobject<UYPlayerCharacterWeaponComponent>(TEXT("weaponComponent"));
    this->m_stateComponent = CreateDefaultSubobject<UYPlayerCharacterStateComponent>(TEXT("PlayerStateComponent"));
    this->m_markerComponent = CreateDefaultSubobject<UYPlayerMapMarkerComponent>(TEXT("MarkerComponent"));
    this->m_associatedPlayerController = NULL;
    this->m_interactionComponent = CreateDefaultSubobject<UYObjectInteractionComponent>(TEXT("YObjectInteractionComponent"));
    this->m_commWheelVOComponent = CreateDefaultSubobject<UYCommWheelVOComponent>(TEXT("YCommWheelComponent"));
    this->m_playerDropComponent = CreateDefaultSubobject<UYPlayerDropComponent>(TEXT("YPlayerDropComponent"));
    this->m_emoteComponent = CreateDefaultSubobject<UYCharacterEmoteComponent>(TEXT("EmoteComponent"));
    this->m_characterCustomizationComponent = CreateDefaultSubobject<UYCharacterCustomizationComponent>(TEXT("CustomizationComponent"));
    this->m_footstepComponent = CreateDefaultSubobject<UYFootstepComponent>(TEXT("FootstepComponent"));
    this->m_characterBagComponent = CreateDefaultSubobject<UYCharacterBagComponent>(TEXT("CharacterBagComponent"));
    this->m_armorComponent = CreateDefaultSubobject<UYArmorComponent>(TEXT("armorComponent"));
    FProperty* p_CharacterMovement_Prior = GetClass()->FindPropertyByName("CharacterMovement");
    this->m_playerMovementComponent = (UYPlayerMovementComponent*)*p_CharacterMovement_Prior->ContainerPtrToValuePtr<UYPlayerMovementComponent*>(this);
    this->m_ledgeClimbingComponent = CreateDefaultSubobject<UYLedgeClimbingComponent>(TEXT("YLedgeClimbingComponent"));
    this->m_fallingDamageComponent = CreateDefaultSubobject<UYFallingDamageComponent>(TEXT("FallingDamageComponent"));
    this->m_cameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    this->m_weakAreaComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("WeakArea"));
    this->m_baseWeaponCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BaseWeaponCollision"));
    this->m_locationComponent = CreateDefaultSubobject<UYCharacterLocationComponent>(TEXT("LocationComponent"));
    this->m_deatchCameraAnimationTargetTransform = CreateDefaultSubobject<UArrowComponent>(TEXT("DeatchCameraAnimationTargetTransform"));
    this->m_staminaComponent = CreateDefaultSubobject<UYStaminaComponent>(TEXT("StaminaComponent"));
    this->m_defaultPhysicalMaterial = NULL;
    this->m_defaultWeakSpotPhysicalMaterial = NULL;
    this->m_deathOutOfBoundsDamage = 10000;
    this->m_baseWeaponCollision->SetupAttachment(RootComponent);
    this->m_firstPersonMesh->SetupAttachment(RootComponent);
    this->m_weakAreaComponent->SetupAttachment(RootComponent);
}

void AYPlayerCharacter::YSetPlayerState(APlayerState* State) {
}

void AYPlayerCharacter::UpdatePhysicalMaterial() {
}

void AYPlayerCharacter::StopJumpInput() {
}

void AYPlayerCharacter::StartJumpInput() {
}

bool AYPlayerCharacter::ShouldUseBoxCollision() {
    return false;
}

void AYPlayerCharacter::SetMeshViewState(EYMeshViewState viewState) {
}

void AYPlayerCharacter::SetCurrentJumpCount(int32 jumpCount) {
}

void AYPlayerCharacter::RefreshInitializationMeshViewState() {
}

void AYPlayerCharacter::OnRep_IsPendingReconnect() {
}

void AYPlayerCharacter::OnJumpTriggered() {
}


void AYPlayerCharacter::OnCharacterMeshInitialized() {
}

void AYPlayerCharacter::OnArmorBrokenCallback(UYArmorComponent* armorComponent) {
}

void AYPlayerCharacter::OnAnyStateChanged(EYStateChangeType stateChange) {
}

void AYPlayerCharacter::Jumped_Implementation(int32 jumpCount) {
}

bool AYPlayerCharacter::IsTargeting() {
    return false;
}

bool AYPlayerCharacter::IsSliding() {
    return false;
}

bool AYPlayerCharacter::IsRunning() {
    return false;
}

bool AYPlayerCharacter::IsPendingTargeting() {
    return false;
}

bool AYPlayerCharacter::IsFiring() {
    return false;
}

bool AYPlayerCharacter::IsDBNO() {
    return false;
}

bool AYPlayerCharacter::IsCrouching() {
    return false;
}

void AYPlayerCharacter::HandleCharacterMovementUpdated(float DeltaSeconds, FVector OldLocation, FVector OldVelocity) {
}

AYPlayerState* AYPlayerCharacter::GetYPlayerState() {
    return NULL;
}

AYPlayerController* AYPlayerCharacter::GetYPlayerController() {
    return NULL;
}

UYCharacterLocationComponent* AYPlayerCharacter::GetLocationComponent() const {
    return NULL;
}


void AYPlayerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AYPlayerCharacter, m_isPendingReconnect);
}


