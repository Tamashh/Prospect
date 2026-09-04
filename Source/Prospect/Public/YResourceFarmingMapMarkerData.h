#pragma once
#include "CoreMinimal.h"
#include "YMapMarkerData.h"
#include "YResourceFarmingMapMarkerData.generated.h"

class AYPlayerState;

UCLASS(Blueprintable)
class UYResourceFarmingMapMarkerData : public UYMapMarkerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AYPlayerState* m_owningPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AYPlayerState* m_previousOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_showWarningForOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 m_heatLevel;
    
    UYResourceFarmingMapMarkerData();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

