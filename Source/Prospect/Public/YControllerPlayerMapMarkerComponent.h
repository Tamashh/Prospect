#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYMapMarkerState.h"
#include "YControllerPlayerMapMarkerComponent.generated.h"

class UYMapMarkerData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYControllerPlayerMapMarkerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMarkerDataUpdated);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMarkerDataUpdated OnMarkerDataUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MarkerData, meta=(AllowPrivateAccess=true))
    TArray<UYMapMarkerData*> m_mapMarkerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UYMapMarkerData*> m_clientMarkersData;
    
    UYControllerPlayerMapMarkerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateMarkersEvacuationState(EYMapMarkerState newStateForMarkers);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MarkerData();
    
};

