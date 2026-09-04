#pragma once
#include "CoreMinimal.h"
#include "YGrant.h"
#include "YPlayerSeasonsData.h"
#include "Engine/DataTable.h"
#include "YWidget.h"
#include "Templates/SubclassOf.h"
#include "YWidget_SeasonRewardsPopup.generated.h"

class UAudioComponent;
class UYDismissedSeasonPassPurchases;
class UYWidget_ImageBase;
class UYWidget_ItemContainer;

UCLASS(Blueprintable, EditInlineNew, Config=Game)
class UYWidget_SeasonRewardsPopup : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYWidget_ItemContainer> m_itemEntryWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemContainer* m_itemNameWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemContainer* m_itemImageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ImageBase* m_seasonImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYDismissedSeasonPassPurchases* m_dismissedSeasonPassPurchases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_unclaimedActiveSeasonGrantIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BITimeWhenShown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_audioShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_audioClose;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UYWidget_ItemContainer*> m_itemWidgetEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* m_audioComponentCraftingInProgress;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerSeasonsData m_cachedPlayerSeasonsData;
    
public:
    UYWidget_SeasonRewardsPopup();

private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateSet();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerSeasonsDataUpdated(const FYPlayerSeasonsData& playerSeasonsData);
    
    UFUNCTION(BlueprintCallable)
    void OnGrantsUpdated(const TArray<FYGrant>& grants);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemHovered(UYWidget_ItemContainer* itemSelected, bool Hovered);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleCanSeeSeasonPopupStateChanged(bool newState);
    
    UFUNCTION(BlueprintCallable)
    void ClaimRewards();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateRewardItems(const int32 numOfRewardItems);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdatePlayerSeasonData(const int32 newSeasonLevel, const bool HasPurchasedSeasonPass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StartPopupAnimation(const FText& purchasedSeasonPassNameText, const bool showSeasonPassPurchase);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetToDefault();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ItemContainer* BP_CreateAndAddItemEntryWidget();
    
};

