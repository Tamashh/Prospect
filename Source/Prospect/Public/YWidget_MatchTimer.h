#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "EYMatchState.h"
#include "YWidget_MatchTimer.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_MatchTimer : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_matchTimerTextBlock;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYMatchState m_exclusiveMatchState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_fallbackTimerText;
    
public:
    UYWidget_MatchTimer();

private:
    UFUNCTION(BlueprintCallable)
    void OnMatchStateUpdated(EYMatchState newMatchState);
    
    UFUNCTION(BlueprintCallable)
    void HandleMatchTimerVisibility(bool newVisibility);
    
    UFUNCTION(BlueprintCallable)
    void HandleMatchTimerUpdate(int32 RemainingTime);
    
    UFUNCTION(BlueprintCallable)
    void HandleMatchTimerElapsed(EYMatchState elapsedMatchState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMatchTimerUpdate(int32 RemainingTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMatchStateUpdated(EYMatchState newMatchState);
    
};

