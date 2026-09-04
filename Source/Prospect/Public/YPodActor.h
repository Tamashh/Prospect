#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "EYPodSpawningTypeContext.h"
#include "OnIntroSequenceFinishedDelegate.h"
#include "OnSpawnContextAssignedDelegate.h"
#include "YPodActor.generated.h"

class UYDataTableRowAssociationComponent;

UCLASS(Blueprintable)
class AYPodActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_startedIntro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_introFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIntroSequenceFinished OnIntroSequenceFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpawnContext, meta=(AllowPrivateAccess=true))
    EYPodSpawningTypeContext m_spawnContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYDataTableRowAssociationComponent* m_rowAssociationComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpawnContextAssigned OnSpawnContextAssigned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_despawnCheckDelay;
    
public:
    AYPodActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetSpawnContext(EYPodSpawningTypeContext spawnContext);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SpawnContext(EYPodSpawningTypeContext oldSpawnContext);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedAsyncLoading(int32 loadHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnDataTableRowHandleSet(FDataTableRowHandle oldRowHandle, FDataTableRowHandle newRowHandle);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SpawnContextAssigned(EYPodSpawningTypeContext spawnContext);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetContextPlayerActor(AActor* playerActorContext);
    
    UFUNCTION(BlueprintCallable)
    void AddToDespawnChecks();
    
};

