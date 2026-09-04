#pragma once
#include "CoreMinimal.h"
#include "EYActivityLocationStatus.h"
#include "EYActivityType.h"
#include "YMapMarkerData.h"
#include "YDebugActivityLocationMapMarkerData.generated.h"

class AYActivityLocation;
class AYActivityLocationLinked;

UCLASS(Blueprintable)
class UYDebugActivityLocationMapMarkerData : public UYMapMarkerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_linkRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_spawnRadiusOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EYActivityType m_activityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EYActivityLocationStatus m_locationStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_currentScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_evaluationScoreThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 m_additionalDebugInfo;
    
    UYDebugActivityLocationMapMarkerData();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnStatusChanged(AYActivityLocation* Location);
    
    UFUNCTION(BlueprintCallable)
    void OnEvaluated(AYActivityLocationLinked* locationLinked);
    
};

