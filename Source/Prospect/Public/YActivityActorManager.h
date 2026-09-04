#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EYActivityType.h"
#include "OnInitialSpawningFinishedDelegate.h"
#include "YActivityDataTableRow.h"
#include "YSpawnActivityActorTokenData.h"
#include "YActivityActorManager.generated.h"

class APlayerController;
class UYActivityRegisterComponent;

UCLASS(Blueprintable)
class AYActivityActorManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYActivityRegisterComponent* m_registerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EYActivityType m_activityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* m_defaultActivityActorClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInitialSpawningFinished BP_OnInitialActorSpawningFinished;
    
    AYActivityActorManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<AActor*> GetSpecialDebugActors();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumSpawnedActors();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDesiredActorCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYActivityDataTableRow GetActivityTuning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugRequestTriggerActivity(APlayerController* requestingPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* BP_SpawnActivityActorFromToken(const FYSpawnActivityActorTokenData& requestData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStartActorSpawning();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString BP_GetDebugDescription();
    
};

