#pragma once
#include "CoreMinimal.h"
#include "YMapMarkerData.h"
#include "YSabotageMapMarkerData.generated.h"

UCLASS(Blueprintable)
class UYSabotageMapMarkerData : public UYMapMarkerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_stateDuration;
    
    UYSabotageMapMarkerData();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

