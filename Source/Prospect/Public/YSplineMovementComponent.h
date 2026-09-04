#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YReplicatedMovementActor.h"
#include "YReplicatedMovementData.h"
#include "YSplineMovementComponent.generated.h"

class USplineComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYSplineMovementComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_replicateMovementFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxMovementDescrepency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_movementSpeedCatchupMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_moveAheadMultiplier;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MovementActors, meta=(AllowPrivateAccess=true))
    TArray<FYReplicatedMovementActor> m_movementActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MovementData, meta=(AllowPrivateAccess=true))
    FYReplicatedMovementData m_movementData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_SplineComponent, meta=(AllowPrivateAccess=true))
    USplineComponent* m_splineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_serverMovementSpeed;
    
public:
    UYSplineMovementComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetSplineComponent(USplineComponent* SplineComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetPredictedMovementSpeed(float newSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementSpeed(float newSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetEndLocations(TArray<float> newEndLocations);
    
private:
    UFUNCTION(BlueprintCallable)
    void ReplicateMovement();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SplineComponent();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MovementData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MovementActors();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPredictedMovementSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<float> GetCurrentLocations();
    
    UFUNCTION(BlueprintCallable)
    void AddMovementActor(const FYReplicatedMovementActor& newMovementActors);
    
};

