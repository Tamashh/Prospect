#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "YSpawnableInterface.h"
#include "YSquadAIType.h"
#include "YAISquad.generated.h"

class AYAICharacter;
class UYHealthComponent;
class UYPersistentData;
class UYPersistentDataAISquad;

UCLASS(Blueprintable)
class PROSPECT_API AYAISquad : public AActor, public IYSpawnableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AYAICharacter*> m_squadCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYPersistentDataAISquad* m_persistentSquadData;
    
    AYAISquad(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ToDebugString();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpawned(UYPersistentData* persistentData);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterDied(UYHealthComponent* healthComponent, AActor* instigatorDeath);
    
    UFUNCTION(BlueprintCallable)
    void OnAICharacterSpawned(AYAICharacter* spawnedAICharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRoamingRadiusOverride();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRoamingHomeLocation();
    
protected:
    UFUNCTION(BlueprintCallable)
    FVector DetermineSpawnLocationForAICharacter(const FYSquadAIType& aiType, const FVector& spawnLocationBase, FString& outErrorCode);
    

    // Fix for true pure virtual functions not being implemented
};

