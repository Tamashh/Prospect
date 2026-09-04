#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "OnAISquadDetermineAIsToSpawnDelegate.h"
#include "YAISpawnRequest.h"
#include "YAIManager.generated.h"

class AActor;
class AYAICharacter;
class UObject;
class UYAIManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYAIManager : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAICharacterRemoved, AYAICharacter*, Character);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAICharacterCountChangedSignature, int32, NewCount);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAICharacterAdded, AYAICharacter*, Character);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AYAICharacter*> m_aiCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FYAISpawnRequest> m_spawnRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> m_objectsRequestedAsyncLoadFor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_objectsLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAICharacterAdded BP_OnAICharacterAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAICharacterRemoved BP_OnAICharacterRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAISquadDetermineAIsToSpawn BP_OnAISquadDetermineAIsToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_shouldSpawnPrototypeAIVersions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rowHandleForAISpawnCharacters;
    
    UYAIManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UYAIManager* TryGetYAIManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTargetFromAllAIs(AActor* actorToRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UYAIManager* GetYAIManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumPendingSpawnRequests();
    
    UFUNCTION(BlueprintCallable)
    FName GenerateUniqueSquadName(const FString& squadNameBase);
    
};

