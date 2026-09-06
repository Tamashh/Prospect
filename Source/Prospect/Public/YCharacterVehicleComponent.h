#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "OnBoostStateChangedDelegate.h"
#include "OnVehicleDataTableRowHandleChangedDelegate.h"
#include "OnVehiclePossesionChangedDelegate.h"
#include "YMovementModeDataChanged.h"
#include "YCharacterVehicleComponent.generated.h"

class AYVehicle;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYCharacterVehicleComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVehicleDataTableRowHandleChanged OnDataTableRowHandleChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVehiclePossesionChanged OnVehiclePossesionChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBoostStateChanged OnBoostStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Vehicle, meta=(AllowPrivateAccess=true))
    AYVehicle* m_vehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_boostStateActiveLocal;

protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BoostStateChanged, meta=(AllowPrivateAccess=true))
    bool m_boostStateReplicated;

public:
    UYCharacterVehicleComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnVehicleDeactivated(bool wasInterupted);
    
    UFUNCTION(BlueprintCallable)
    void OnVehicleActivated();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Vehicle();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BoostStateChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnMovementImpact(const FHitResult& Hit, const FVector& moveDelta);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementDataChanged(const FYMovementModeDataChanged& newData);
    
};

