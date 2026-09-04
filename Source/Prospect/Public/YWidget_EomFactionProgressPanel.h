#pragma once
#include "CoreMinimal.h"
#include "YFactionProgress.h"
#include "YWidget.h"
#include "YFactionsDataTableRow.h"
#include "YRewardEntry.h"
#include "YWidget_EomFactionProgressPanel.generated.h"

class UTextBlock;
class UYWidget_ItemContainer;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_EomFactionProgressPanel : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_maxLevelText;
    
    UYWidget_EomFactionProgressPanel();

    UFUNCTION(BlueprintCallable)
    void CreateNextUnlockableBlueprints(const FYFactionProgress& finalProgress, TArray<UYWidget_ItemContainer*>& unlockableBlueprintsOut);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetProgressBarData(const FYFactionProgress& previousProgress, const FYFactionProgress& currentProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_InitRewardsForFaction(const FYFactionsDataTableRow& factionData, const TArray<FYRewardEntry>& rewardEntry, const FYFactionProgress& initialProgress, const FYFactionProgress& finalProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ItemContainer* BP_CreateAndAddWidgetEntry();
    
};

