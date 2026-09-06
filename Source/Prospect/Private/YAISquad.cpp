#include "YAISquad.h"
#include "Components/SceneComponent.h"

AYAISquad::AYAISquad(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->m_persistentSquadData = NULL;
}

FString AYAISquad::ToDebugString() const {
    return TEXT("");
}

void AYAISquad::OnSpawned_Implementation(UYPersistentActorInfo* persistentData) {
}

void AYAISquad::OnCharacterDied(UYHealthComponent* healthComponent, AActor* instigatorDeath) {
}

void AYAISquad::OnAICharacterSpawned(AYAICharacter* spawnedAICharacter) {
}

float AYAISquad::GetRoamingRadiusOverride() const {
    return 0.0f;
}

FVector AYAISquad::GetRoamingHomeLocation() const {
    return FVector{};
}

FVector AYAISquad::DetermineSpawnLocationForAICharacter(const FYAICharacterDefinition& aiType, const FVector& spawnLocationBase, FString& outErrorCode) {
    return FVector{};
}


