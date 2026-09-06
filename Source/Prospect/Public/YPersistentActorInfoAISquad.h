#pragma once
#include "CoreMinimal.h"
#include "OnAICharacterDiedDelegate.h"
#include "OnAICharacterSpawnedDelegate.h"
#include "OnSquadDiedDelegate.h"
#include "YAICharacterDefinition.h"
#include "YAISquadSpawnDefinition.h"
#include "YPersistentActorInfo.h"
#include "YPersistentActorInfoAISquad.generated.h"

class AYAISquad;

UCLASS(Blueprintable)
class UYPersistentActorInfoAISquad : public UYPersistentActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYAISquadSpawnDefinition m_spawnDefinition;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYAICharacterDefinition> m_AIsToSpawn;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYAICharacterDefinition> m_AIsStillAlive;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAICharacterDied OnAIDied;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSquadDied OnSquadDied;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAICharacterSpawned OnAISpawned;

    UYPersistentActorInfoAISquad();

    UFUNCTION(BlueprintCallable)
    AYAISquad* TryGetSquadActor();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ToDebugString();

};

