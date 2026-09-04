#pragma once
#include "CoreMinimal.h"
#include "YMapMarkerData.h"
#include "YBossHuntMapMarkerData.generated.h"

UCLASS(Blueprintable)
class UYBossHuntMapMarkerData : public UYMapMarkerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_stateDuration;
    
    UYBossHuntMapMarkerData();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

