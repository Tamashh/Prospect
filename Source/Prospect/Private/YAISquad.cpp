#include "YAISquad.h"
#include "Components/SceneComponent.h"

AYAISquad::AYAISquad(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->m_persistentSquadData = NULL;
}

FString AYAISquad::ToDebugString() {
    return TEXT("");
}

void AYAISquad::OnSpawned_Implementation(UYPersistentData* persistentData) {
}

void AYAISquad::OnCharacterDied(UYHealthComponent* healthComponent, AActor* instigatorDeath) {
}

void AYAISquad::OnAICharacterSpawned(AYAICharacter* spawnedAICharacter) {
}

float AYAISquad::GetRoamingRadiusOverride() {
    return 0.0f;
}

FVector AYAISquad::GetRoamingHomeLocation() {
    return FVector{};
}

FVector AYAISquad::DetermineSpawnLocationForAICharacter(const FYSquadAIType& aiType, const FVector& spawnLocationBase, FString& outErrorCode) {
    return FVector{};
}


