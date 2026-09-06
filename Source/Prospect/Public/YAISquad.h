#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "YAICharacterDefinition.h"
#include "YPersistentActorInterface.h"
#include "YAISquad.generated.h"

class AYAICharacter;
class UYHealthComponent;
class UYPersistentActorInfo;
class UYPersistentActorInfoAISquad;

UCLASS(Blueprintable)
class PROSPECT_API AYAISquad : public AActor, public IYPersistentActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AYAICharacter*> m_squadCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYPersistentActorInfoAISquad* m_persistentSquadData;
    
    AYAISquad(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ToDebugString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpawned(UYPersistentActorInfo* persistentData);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterDied(UYHealthComponent* healthComponent, AActor* instigatorDeath);
    
    UFUNCTION(BlueprintCallable)
    void OnAICharacterSpawned(AYAICharacter* spawnedAICharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRoamingRadiusOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRoamingHomeLocation() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    FVector DetermineSpawnLocationForAICharacter(const FYAICharacterDefinition& aiType, const FVector& spawnLocationBase, FString& outErrorCode);
    

    // Fix for true pure virtual functions not being implemented
};

