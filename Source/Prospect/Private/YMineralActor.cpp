#include "YMineralActor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "YDestructibleMeshComponent.h"
#include "YScannableComponent.h"

AYMineralActor::AYMineralActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->m_sceneComponent = (USceneComponent*)RootComponent;
    this->m_rockMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RockMeshComponent"));
    this->m_destructibleMeshComponent = CreateDefaultSubobject<UYDestructibleMeshComponent>(TEXT("YDestructibleComponent"));
    this->m_scanComponent = CreateDefaultSubobject<UYScannableComponent>(TEXT("ScanComponent"));
    this->m_materialParameterName = TEXT("ShardLocation0");
    this->m_destructibleMeshComponent->SetupAttachment(RootComponent);
    this->m_rockMeshComponent->SetupAttachment(RootComponent);
}

void AYMineralActor::TrySetupDynamicMaterialInstances() {
}

void AYMineralActor::TryCrumbleMineral() {
}

void AYMineralActor::SetupMineral(FDataTableRowHandle rowHandle, EYMineralTier lootTier) {
}

void AYMineralActor::OnRowLoaded() {
}

void AYMineralActor::OnRep_MineralVariationRowHandle() {
}

void AYMineralActor::OnRep_LootSpawnedAt() {
}

void AYMineralActor::OnRep_LootPickedUpAt() {
}

void AYMineralActor::OnLootActorDestroyed(AActor* DestroyedActor) {
}

void AYMineralActor::DoLootDiscoveryCheck(APlayerController* Player) {
}


void AYMineralActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AYMineralActor, m_lootSpawnedAt);
    DOREPLIFETIME(AYMineralActor, m_spawnedLootActors);
    DOREPLIFETIME(AYMineralActor, m_lootPickedUpAt);
    DOREPLIFETIME(AYMineralActor, m_mineralVariationRowHandle);
}


