#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YPersistentActorSpawnerComponent.generated.h"

class UObject;
class UYPersistentActorInfo;
class UYPersistentActorSpawnerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYPersistentActorSpawnerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_defaultSpawnRadius;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_defaultDespawnRadiusBonus;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UYPersistentActorInfo*> m_infosAboutDespawnedActors;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UYPersistentActorInfo*> m_infosAboutSpawnedActors;

    UYPersistentActorSpawnerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveActorToSpawn(UYPersistentActorInfo* persistentData);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UYPersistentActorSpawnerComponent* GetPersistentActorSpawner(const UObject* WorldContextObject);

    UFUNCTION(BlueprintCallable)
    void DebugPurgeAllEntries();

    UFUNCTION(BlueprintCallable)
    void AddNewActorToSpawn(UYPersistentActorInfo* persistentData, const FString& Context);

};
