#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YProspectorLevelData.h"
#include "YRewardEntry.h"
#include "YWidget_ProspectorLevel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ProspectorLevel : public UYWidget {
    GENERATED_BODY()
public:
    UYWidget_ProspectorLevel();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerProfileDataUpdated(const FYProspectorLevelData& playerProfileData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowProspectorLevelRewards(const TArray<FYRewardEntry>& rewardValues);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPlayerProfileDataUpdated(const FYProspectorLevelData& playerProfileData);
    
};

