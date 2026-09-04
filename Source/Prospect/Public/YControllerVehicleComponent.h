#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YControllerVehicleComponent.generated.h"

class AYVehicle;
class UYCharacterVehicleComponent;
class UYPlayerCharacterStateComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYControllerVehicleComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPlayerCharacterStateComponent* m_characterStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYCharacterVehicleComponent* m_vehicleCharacterComponent;
    
    UYControllerVehicleComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartVehiclePossesion(AYVehicle* relevantVehicleActor);
    
    UFUNCTION(BlueprintCallable)
    bool SetVehicleBoostState(bool newState, bool disregardCooldown);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetVehicleBoostState(bool newState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnVehicleStateLeavingDeActivated(bool wasInterupted);
    
    UFUNCTION(BlueprintCallable)
    void OnVehicleStateLeavingActivated();
    
    UFUNCTION(BlueprintCallable)
    void OnVehicleStateActivated();
    
    UFUNCTION(BlueprintCallable)
    void OnTimerVehicleLeavingStateFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnInputStateChanged(int32 stateChangeType, bool Active);
    
    UFUNCTION(BlueprintCallable)
    void OnDeactivateBoost();
    
    UFUNCTION(BlueprintCallable)
    void OnBoostCooldownFinished();
    
};

