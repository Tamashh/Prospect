#pragma once
#include "CoreMinimal.h"
#include "YMatchmakingResponse.h"
#include "Engine/DataTable.h"
#include "YWidget.h"
#include "EYMatchState.h"
#include "EYRequeueingState.h"
#include "YWidget_EomActionsPanel.generated.h"

class UButton;
class UPanelWidget;
class UTextBlock;
class UWidgetSwitcher;
class UYWidget_Timer;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_EomActionsPanel : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* m_matchmakingContextWidgetSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_Timer* m_matchmakingQueuingTimeTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_estimatedMmTimeContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_estimatedMmTimeTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* m_startMatchmakingButtonWidgetSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_goToStationButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_startMatchmakingButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_cancelMatchmakingButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_matchmakingInfoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_Timer* m_goToStationTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_audioMatchmakingStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_audioMatchmakingCanceled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_audioMatchStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_delayBeforeTransitionToStation;
    
public:
    UYWidget_EomActionsPanel();

private:
    UFUNCTION(BlueprintCallable)
    void StopGoToStationTimer() const;
    
    UFUNCTION(BlueprintCallable)
    void StartGoStationTimer();
    
    UFUNCTION(BlueprintCallable)
    void OnStartMatchmakingButtonClicked();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRequeueingStateUpdated(const EYRequeueingState requeueingState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMatchStateUpdated(EYMatchState matchState);
    
    UFUNCTION(BlueprintCallable)
    void OnCancelMatchmakingButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void InitializeRequeuingState();
    
    UFUNCTION(BlueprintCallable)
    void HandleRequeueingAllowed();
    
    UFUNCTION(BlueprintCallable)
    void HandleQueueDisbanded(const FString& GameMode);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerMatchedUpdate(bool isMatched);
    
    UFUNCTION(BlueprintCallable)
    void HandleMatchmakingUpdate(const FYMatchmakingResponse& response, int32 matchmakingTimeSeconds);
    
    UFUNCTION(BlueprintCallable)
    void HandleMatchmakingEstimatedTimeUpdated(float estimatedTime) const;
    
    UFUNCTION(BlueprintCallable)
    void GoToStation();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRequeueingStateUpdated(const EYRequeueingState requeueingState);
    
};

