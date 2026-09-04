#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "OnAcknowledgedPlayerStatesChangedDelegate.h"
#include "YSocialActor.generated.h"

class AYPlayerState;
class UYActorUIComponent;
class UYMapMarkerComponent;
class UYPingableComponent;

UCLASS(Blueprintable)
class AYSocialActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYMapMarkerComponent* m_mapmarkerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYActorUIComponent* m_actorUIComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPingableComponent* m_pingableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_commWheelContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* m_contextActorPinged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AcknowledgedPlayerStates, meta=(AllowPrivateAccess=true))
    TArray<AYPlayerState*> m_acknowledgedPlayerStates;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAcknowledgedPlayerStatesChanged BP_OnAcknowledgedPlayerStatesChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_proximityCheckFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_destroyDistance;
    
public:
    AYSocialActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerRequestDestroy();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_AcknowledgedPlayerStates();
    
private:
    UFUNCTION(BlueprintCallable)
    void DestroyDueMaxLifeTime();
    
    UFUNCTION(BlueprintCallable)
    void CheckDestroy();
    
};

