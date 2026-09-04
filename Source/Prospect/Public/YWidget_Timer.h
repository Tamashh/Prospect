#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YWidget.h"
#include "YWidget_Timer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_Timer : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_audioTimerElapsingSoonThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isPasAudioTimerElapsingSoonThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_audioTimerElapsingSoon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_audioTimerFinished;
    
public:
    UYWidget_Timer();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateTimerDisplayWithText(const FText& newTimeAsText);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateTimerDisplay(float newTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTimerFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStopTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStartTimer();
    
};

