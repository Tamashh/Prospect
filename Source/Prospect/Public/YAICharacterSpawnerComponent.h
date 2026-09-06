#pragma once
#include "CoreMinimal.h"
#include "UObject/SoftObjectPath.h"
#include "Components/ActorComponent.h"
#include "EYEnemyType.h"
#include "YAICharacters.h"
#include "YAISpawnRequest.h"
#include "YAICharacterSpawnerComponent.generated.h"

class AYAICharacter;
class UObject;
class UYAICharacterSpawnerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYAICharacterSpawnerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAICharacterAdded, AYAICharacter*, Character);

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAICharacterAdded BP_OnAICharacterAdded;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAICharacterAdded BP_OnAICharacterFullySpawned;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYEnemyType, TSoftClassPtr<AYAICharacter>> m_aiCharacterClasses;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_objectsLoaded;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EYEnemyType, FYAICharacters> m_aiCharactersPerType;

private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AYAICharacter*> m_aiCharacters;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FYAISpawnRequest> m_spawnRequests;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> m_objectsRequestedAsyncLoadFor;

public:
    UYAICharacterSpawnerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UYAICharacterSpawnerComponent* TryGetYAICharacterSpawner(const UObject* WorldContextObject);

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UYAICharacterSpawnerComponent* GetYAICharacterSpawner(const UObject* WorldContextObject);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumPendingSpawnRequests() const;

};

