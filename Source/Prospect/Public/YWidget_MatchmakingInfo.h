#pragma once
#include "CoreMinimal.h"
#include "YMatchmakingResponse.h"
#include "YWidget.h"
#include "YWidget_MatchmakingInfo.generated.h"

class UYWidget_Timer;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_MatchmakingInfo : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_Timer* m_matchmakingQueuingTimeTimer;
    
public:
    UYWidget_MatchmakingInfo();

private:
    UFUNCTION(BlueprintCallable)
    void StopMatchmakingQueuingTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartMatchmakingQueuingTimer(int32 StartOffset);
    
    UFUNCTION(BlueprintCallable)
    void HandleQueueDisbanded(const FString& GameMode);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerMatchedUpdate(bool isMatched);
    
    UFUNCTION(BlueprintCallable)
    void HandleMatchmakingUpdate(const FYMatchmakingResponse& response, int32 matchmakingTimeSeconds);
    
    UFUNCTION(BlueprintCallable)
    void CancelMatchmaking();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PlayerMatched();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnQueueDisbanded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMatchmakingUpdate(const FYMatchmakingResponse& response, int32 matchmakingTimeSeconds);
    
};

