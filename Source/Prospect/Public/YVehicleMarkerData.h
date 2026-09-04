#pragma once
#include "CoreMinimal.h"
#include "EYVehicleStateType.h"
#include "YMapMarkerData.h"
#include "YVehicleMarkerData.generated.h"

class AActor;

UCLASS(Blueprintable)
class UYVehicleMarkerData : public UYMapMarkerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* m_owningActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EYVehicleStateType m_vehicleStateType;
    
    UYVehicleMarkerData();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

