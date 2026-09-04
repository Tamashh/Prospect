#pragma once
#include "CoreMinimal.h"
#include "YPlayerSeasonsData.h"
#include "YWidget.h"
#include "YWidget_SeasonProgress.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_SeasonProgress : public UYWidget {
    GENERATED_BODY()
public:
    UYWidget_SeasonProgress();

private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerSeasonDataUpdated(const FYPlayerSeasonsData& playerSeasonsData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPlayerSeasonDataUpdated(int32 currentLevel, int32 currentXP, int32 neededXP, bool HasPurchasedSeasonPass);
    
};

