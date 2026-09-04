#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YSpawnManagerComponent.generated.h"

class UObject;
class UYPersistentData;
class UYSpawnManagerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYSpawnManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UYPersistentData*> m_infosAboutDespawnedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UYPersistentData*> m_infosAboutSpawnedActors;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_defaultSpawnRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_defaultDespawnRadiusBonus;
    
    UYSpawnManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveActorToSpawn(UYPersistentData* persistentData);
    
    UFUNCTION(BlueprintCallable)
    void PurgeAllEntries();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPersistentDataStillRelevant(UYPersistentData* persistentData) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UYSpawnManagerComponent* GetYSpawnManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void AddNewActorToSpawn(UYPersistentData* persistentData, const FString& Context);
    
};

