#pragma once
#include "CoreMinimal.h"
#include "YWidgetController.h"
#include "EYTimerDisplayType.h"
#include "YWidgetController_Timer.generated.h"

UCLASS(Blueprintable)
class UYWidgetController_Timer : public UYWidgetController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timerFirstDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timerUpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timerDurationInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_countUpwards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYTimerDisplayType m_timerDisplayType;
    
public:
    UYWidgetController_Timer();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateTimer();
    
public:
    UFUNCTION(BlueprintCallable)
    void StopTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartTimer(bool forceRestart, int32 StartOffset);
    
};

