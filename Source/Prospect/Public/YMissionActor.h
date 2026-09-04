#pragma once
#include "CoreMinimal.h"
#include "EYMissionResultType.h"
#include "OnMissionStatusDelegateDelegate.h"
#include "YAbstractMissionActor.h"
#include "YMissionInitializationData.h"
#include "YMissionActor.generated.h"

class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AYMissionActor : public AYAbstractMissionActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InitializationData, meta=(AllowPrivateAccess=true))
    FYMissionInitializationData m_replicatedInitializationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 m_stepHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 m_actorHandle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionStatusDelegate OnActorMissionStatusDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MissionStatusChanged, meta=(AllowPrivateAccess=true))
    EYMissionResultType m_missionStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_skeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* m_staticMeshComponent;
    
    AYMissionActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetActorMissionStatus(EYMissionResultType missionResultType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MissionStatusChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InitializationData();
    
};

