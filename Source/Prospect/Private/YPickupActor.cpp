#include "YPickupActor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"
#include "YObjectInteractionComponent.h"

AYPickupActor::AYPickupActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetCullDistanceSquared = 20250000.0f;
    this->NetUpdateFrequency = 10.0f;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("PickupSphere"));
    this->m_shouldNeverUpdateNavigationTransform = true;
    this->m_wantsInitialScaling = false;
    this->m_minimumBouncePlaySoundVelocity = 1.0f;
    this->m_offsetSpawnLocationBySphereRadius = true;
    this->m_pickupType = EYPickupType::None;
    this->m_lootSourceType = EYLootSourceType::None;
    this->m_showNotificationMessage = false;
    this->m_meshComponent = NULL;
    this->m_sphereComponent = (USphereComponent*)RootComponent;
    this->m_objectInteractionComponent = CreateDefaultSubobject<UYObjectInteractionComponent>(TEXT("YObjectInteractionComponent"));
    this->m_scannableComponent = NULL;
    this->m_projectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("MovementComponent"));
    this->m_mapmarkerComponent = NULL;
    this->m_actorUIComponent = NULL;
    this->m_loopingAudioComponent = NULL;
    this->m_characterCollectingPickUpActor = NULL;
    this->m_exclusivePlayerState = NULL;
    this->m_preventAutoSwitchOffTick = false;
    this->m_isCollected = false;
    this->m_lastTimeReceivedMovementUpdate = -1.0f;
    this->m_netUpdateFrequency = -1.0f;
    this->m_LootToLootCollisionEnabled = false;
}

void AYPickupActor::UpdateInteractionMessage() {
}

void AYPickupActor::SetupPickupItemInternal() {
}

void AYPickupActor::SetupExclusivePickupRightsForPlayer(AYPlayerState* PlayerState, float Duration) {
}

void AYPickupActor::SetPickupItem(const FYPickupItem& pickupItem) {
}

void AYPickupActor::SetMesh(TSoftObjectPtr<UObject> meshObject, TSoftObjectPtr<UMaterialInterface> meshMaterial, const TArray<FYMeshAttachment>& attachments) {
}

void AYPickupActor::RegisterActorForDespawning() {
}

void AYPickupActor::OnWeaponContentLoaded(FYActiveWeaponCharacterInitializationData Data) const {
}

void AYPickupActor::OnRepLootToLootCollision() {
}

void AYPickupActor::OnRep_Item() {
}

void AYPickupActor::OnProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity) {
}

void AYPickupActor::OnPlayLootSpawnEffects_Implementation(EYItemRarityType rarity) {
}

void AYPickupActor::OnPickUpExclusivityEnds() {
}

void AYPickupActor::OnMeshLoaded(TSoftObjectPtr<UObject> meshObject, TSoftObjectPtr<UMaterialInterface> meshMaterial, TArray<FYMeshAttachment> attachments) {
}

void AYPickupActor::OnMakeMeshComponentVisible() const {
}

void AYPickupActor::OnCollected(EYInteractionType interactionType, AYPlayerController_Match* collectingPlayer) {
}

bool AYPickupActor::IsBlockedByExclusivity(const AYPlayerState* PlayerState) const {
    return false;
}

bool AYPickupActor::IsActive() const {
    return false;
}

bool AYPickupActor::GetMeshTransformOverride(FVector& outTranslation, FRotator& OutRotation, FVector& outScale) const {
    return false;
}

EYItemType AYPickupActor::GetItemType() const {
    return EYItemType::None;
}

EYItemRarityType AYPickupActor::GetItemRarity() const {
    return EYItemRarityType::Invalid;
}

int32 AYPickupActor::GetItemAmount() const {
    return 0;
}

FDataTableRowHandle AYPickupActor::GetBaseItemRowHandle() const {
    return FDataTableRowHandle{};
}

void AYPickupActor::DisableInitialScalingDemand() {
}

void AYPickupActor::DestroyPickUpActorNow() {
}

bool AYPickupActor::CanPlayerPickupItem(AActor* actorContext, TArray<UAnimMontage*> blockingAnimations) const {
    return false;
}






void AYPickupActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AYPickupActor, m_wantsInitialScaling);
    DOREPLIFETIME(AYPickupActor, m_item);
    DOREPLIFETIME(AYPickupActor, m_lootSourceType);
    DOREPLIFETIME(AYPickupActor, m_exclusivePlayerState);
    DOREPLIFETIME(AYPickupActor, m_LootToLootCollisionEnabled);
}


