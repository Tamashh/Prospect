#pragma once
#include "CoreMinimal.h"
#include "YMatchConnectionData.h"
#include "YMatchmakingResponse.h"
#include "YWidget.h"
#include "YWidget_PersistentMatch.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_PersistentMatch : public UYWidget {
    GENERATED_BODY()
public:
    UYWidget_PersistentMatch();

private:
    UFUNCTION(BlueprintCallable)
    void OnStationConnectData(const FYMatchConnectionData& connectData);
    
    UFUNCTION(BlueprintCallable)
    void HandleMatchmakingUpdate(const FYMatchmakingResponse& response, int32 matchmakingTimeSeconds);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStationConnectData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMatchmakingUpdate(const FYMatchmakingResponse& response, int32 matchmakingTimeSeconds);
    
};

