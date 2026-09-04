#pragma once
#include "CoreMinimal.h"
#include "YAreaMapMarkerData.h"
#include "YStormSurgeMapMarkerData.generated.h"

UCLASS(Blueprintable)
class UYStormSurgeMapMarkerData : public UYAreaMapMarkerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_stateDuration;
    
    UYStormSurgeMapMarkerData();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

