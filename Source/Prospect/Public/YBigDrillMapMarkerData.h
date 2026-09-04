#pragma once
#include "CoreMinimal.h"
#include "YMapMarkerData.h"
#include "YBigDrillMapMarkerData.generated.h"

class AYPlayerState;

UCLASS(Blueprintable)
class UYBigDrillMapMarkerData : public UYMapMarkerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_stateDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AYPlayerState* m_owningPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_isOnlyLocationMarker;
    
    UYBigDrillMapMarkerData();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

