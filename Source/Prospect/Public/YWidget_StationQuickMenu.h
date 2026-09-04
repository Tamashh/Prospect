#pragma once
#include "CoreMinimal.h"
#include "YMatchmakingResponse.h"
#include "YWidget.h"
#include "YWidget_StationQuickMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_StationQuickMenu : public UYWidget {
    GENERATED_BODY()
public:
    UYWidget_StationQuickMenu();

private:
    UFUNCTION(BlueprintCallable)
    void HandleQueueDisbanded(const FString& GameMode);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerMatchedUpdate(bool isMatched);
    
    UFUNCTION(BlueprintCallable)
    void HandleMatchmakingUpdate(const FYMatchmakingResponse& response, int32 matchmakingTimeSeconds);
    
protected:
    UFUNCTION(BlueprintCallable)
    void GoToFaction(const FName& factionId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateWidgetVisibility(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PlayerMatched();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnQueueDisbanded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMatchmakingUpdate(const FYMatchmakingResponse& response, int32 matchmakingTimeSeconds);
    
};

