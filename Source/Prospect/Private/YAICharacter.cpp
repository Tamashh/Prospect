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
    this->m_aiController = NULL;
    this->m_aiDataComponent = CreateDefaultSubobject<UYAIDataComponent>(TEXT("YAIDataComponent"));
    this->m_animationComponent = CreateDefaultSubobject<UYAIAnimationComponent>(TEXT("YAIAnimationComponent"));
    this->m_staggerComponent = CreateDefaultSubobject<UYAIStaggerComponent>(TEXT("AIStaggerComponent"));
    this->m_armorComponent = CreateDefaultSubobject<UYArmorComponent>(TEXT("armorComponent"));
    this->m_variationsComponent = CreateDefaultSubobject<UYAIVariationsComponent>(TEXT("VariationComponent"));
    this->m_isPlacedInWorld = false;
    this->m_shouldLimitRootMotionVelocity = false;
    this->m_attachedProjectile = NULL;
    this->m_allowedToReset = true;
    const FProperty* p_Mesh = GetClass()->FindPropertyByName("Mesh");
    (*p_Mesh->ContainerPtrToValuePtr<USkeletalMeshComponent*>(this))->SetupAttachment(RootComponent);
}

void AYAICharacter::SetViewRotationBone(FName BoneName, bool ignoreVertical) {
}

void AYAICharacter::SetVariations(const FDataTableRowHandle& variationRowHandle) {
}

void AYAICharacter::SetMaxSpeed(const FString& Context, float movementSpeed) {
}

void AYAICharacter::ReportAISenseDamageEvent(const FYDealtDamageData& Data) {
}


void AYAICharacter::OnYAIStateHasChanged(EYAIState oldState, EYAIState newState) {
}

void AYAICharacter::OnRep_Variations() {
}

void AYAICharacter::OnRep_GameplayTags() {
}

AYAIController* AYAICharacter::GetYAIController() {
    return NULL;
}

FString AYAICharacter::GetSquadTypeName() {
    return TEXT("");
}

AYAISquad* AYAICharacter::GetSquad() {
    return NULL;
}

void AYAICharacter::GetGameplayTags(FGameplayTagContainer& characterTags) {
}

FString AYAICharacter::GetDebugAIInfo() {
    return TEXT("");
}

AActor* AYAICharacter::GetCombatTarget() {
    return NULL;
}

FString AYAICharacter::GetAIVariationName() {
    return TEXT("");
}

void AYAICharacter::GetAITuningDataBP(FYAITuningRow& Data) {
}

EYAIState AYAICharacter::GetAIState() {
    return EYAIState::None;
}

UYAIDataComponent* AYAICharacter::GetAIDataComponent() {
    return NULL;
}

FString AYAICharacter::GetAICharacterType() {
    return TEXT("");
}

FText AYAICharacter::GetAICharacterName() {
    return FText::GetEmpty();
}

void AYAICharacter::GetAIAudioData(FYAIAudio& audioData) {
}

void AYAICharacter::ExecuteAttackAnimationNotify() {
}


void AYAICharacter::AppendGameplayTags(const FGameplayTagContainer& newTags) {
}

void AYAICharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AYAICharacter, m_gameplayTags);
    DOREPLIFETIME(AYAICharacter, m_variationsRowHandle);
    DOREPLIFETIME(AYAICharacter, m_shouldLimitRootMotionVelocity);
    DOREPLIFETIME(AYAICharacter, m_rootMotionVelocity);
}


