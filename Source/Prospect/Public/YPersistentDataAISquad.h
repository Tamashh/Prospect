#pragma once
#include "CoreMinimal.h"
#include "OnAICharacterDiedDelegate.h"
#include "OnAICharacterSpawnedDelegate.h"
#include "OnSquadDiedDelegate.h"
#include "YAISquadSpawnDefinition.h"
#include "YPersistentData.h"
#include "YSquadAIType.h"
#include "YPersistentDataAISquad.generated.h"

class AYAISquad;

UCLASS(Blueprintable)
class UYPersistentDataAISquad : public UYPersistentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYAISquadSpawnDefinition m_spawnDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYSquadAIType> m_AIsToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYSquadAIType> m_AIsStillAlive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAICharacterDied OnAIDied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSquadDied OnSquadDied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAICharacterSpawned OnAISpawned;
    
    UYPersistentDataAISquad();

    UFUNCTION(BlueprintCallable)
    AYAISquad* TryGetSquadActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ToDebugString();
    
};

