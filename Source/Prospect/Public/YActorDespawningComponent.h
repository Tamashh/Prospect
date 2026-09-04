#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YDespawnActorInfo.h"
#include "YActorDespawningComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYActorDespawningComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FYDespawnActorInfo> m_actorsToDespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_defaultDespawnDistance;
    
public:
    UYActorDespawningComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDebugActorDespawnDistanceMultiplier();
    
    UFUNCTION(BlueprintCallable)
    static FString DetermineDebugDespawnActorInfo(AActor* Actor);
    
};

