#include "YAICharacter.h"
#include "Net/UnrealNetwork.h"
#include "YAIAnimationComponent.h"
#include "YAICharacterMovementComponent.h"
#include "YAIController.h"
#include "YAIDataComponent.h"
#include "YAIStaggerComponent.h"
#include "YAIVariationsComponent.h"
#include "YArmorComponent.h"
#include "YCapsuleComponent.h"
#include "YSkeletalMeshComponent.h"

AYAICharacter::AYAICharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UYCapsuleComponent>(TEXT("CollisionCylinder")).SetDefaultSubobjectClass<UYSkeletalMeshComponent>(TEXT("CharacterMesh0")).SetDefaultSubobjectClass<UYAICharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->NetUpdateFrequency = 10.0f;
    this->AIControllerClass = AYAIController::StaticClass();
    const FProperty* p_CapsuleComponent = GetClass()->FindPropertyByName("CapsuleComponent");
    (*p_CapsuleComponent->ContainerPtrToValuePtr<UCapsuleComponent*>(this)) = (UCapsuleComponent*)RootComponent;
    this->m_isRootMotionRotationScalingEnabled = true;
    this->m_shouldLimitRootMotionVelocity = false;
    this->m_aiDataComponent = CreateDefaultSubobject<UYAIDataComponent>(TEXT("YAIDataComponent"));
    this->m_animationComponent = CreateDefaultSubobject<UYAIAnimationComponent>(TEXT("YAIAnimationComponent"));
    this->m_staggerComponent = CreateDefaultSubobject<UYAIStaggerComponent>(TEXT("AIStaggerComponent"));
    this->m_armorComponent = CreateDefaultSubobject<UYArmorComponent>(TEXT("armorComponent"));
    this->m_variationsComponent = CreateDefaultSubobject<UYAIVariationsComponent>(TEXT("VariationComponent"));
    this->m_aiController = NULL;
    this->m_attachedProjectile = NULL;
    const FProperty* p_Mesh = GetClass()->FindPropertyByName("Mesh");
    (*p_Mesh->ContainerPtrToValuePtr<USkeletalMeshComponent*>(this))->SetupAttachment(RootComponent);
}

void AYAICharacter::TriggerReset() const {
}

FString AYAICharacter::ToDebugString() const {
    return TEXT("");
}

void AYAICharacter::SetViewRotationBone(FName BoneName, bool ignoreVertical) {
}

void AYAICharacter::SetMaxSpeed(const FString& Context, float movementSpeed) {
}

void AYAICharacter::SetMaxAcceleration(const FString& Context, float accelerationSpeed) {
}

void AYAICharacter::ReportAISenseDamageEvent(const FYDealtDamageData& Data) {
}

void AYAICharacter::OnYAIStateHasChanged(EYAIState oldState, EYAIState newState) {
}

void AYAICharacter::OnRep_GameplayTags() {
}



void AYAICharacter::MulticastPlayMuzzle_Implementation(const FDataTableRowHandle& weaponTransportRowHandle) {
}

AYAIController* AYAICharacter::GetYAIController() const {
    return NULL;
}

FString AYAICharacter::GetSquadTypeName() const {
    return TEXT("");
}

AYAISquad* AYAICharacter::GetSquad() const {
    return NULL;
}

void AYAICharacter::GetGameplayTags(FGameplayTagContainer& characterTags) const {
}

FString AYAICharacter::GetEnemyTypeString() const {
    return TEXT("");
}

EYEnemyType AYAICharacter::GetEnemyType() const {
    return EYEnemyType::None;
}

FString AYAICharacter::GetDebugAIInfo() const {
    return TEXT("");
}

AActor* AYAICharacter::GetCombatTarget() const {
    return NULL;
}

FString AYAICharacter::GetAIVariationName() const {
    return TEXT("");
}

void AYAICharacter::GetAITuningDataBP(FYAITuningRow& Data) const {
}

EYAIState AYAICharacter::GetAIState() const {
    return EYAIState::None;
}

FString AYAICharacter::GetAIEnemyTypeAsString() const {
    return TEXT("");
}

EYEnemyType AYAICharacter::GetAIEnemyType() const {
    return EYEnemyType::None;
}

UYAIDataComponent* AYAICharacter::GetAIDataComponent() const {
    return NULL;
}

FText AYAICharacter::GetAICharacterName() const {
    return FText::GetEmpty();
}

void AYAICharacter::GetAIAudioData(FYAIAudio& audioData) const {
}

void AYAICharacter::AppendGameplayTags(const FGameplayTagContainer& newTags) {
}

void AYAICharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AYAICharacter, m_variationsRowHandle);
    DOREPLIFETIME(AYAICharacter, m_gameplayTags);
    DOREPLIFETIME(AYAICharacter, m_shouldLimitRootMotionVelocity);
    DOREPLIFETIME(AYAICharacter, m_rootMotionVelocity);
}


