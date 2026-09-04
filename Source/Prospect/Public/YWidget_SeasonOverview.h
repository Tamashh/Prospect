#pragma once
#include "CoreMinimal.h"
#include "YPlayerSeasonGrants.h"
#include "YPlayerSeasonsData.h"
#include "YWidget.h"
#include "YResourceExecutionInterface.h"
#include "YSeasonRewardLevel.h"
#include "YSeasonRow.h"
#include "YWidget_SeasonOverview.generated.h"

class UYWidget_ImageBase;
class UYWidget_ItemContainer;

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_SeasonOverview : public UYWidget, public IYResourceExecutionInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRewardItemHoveredSignature, UYWidget_ItemContainer*, itemWidget, bool, Hovered);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRewardItemClickedSignature, UYWidget_ItemContainer*, itemWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPurchaseSeasonPass);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPurchaseSeasonLevel);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRewardItemClickedSignature OnRewardItemClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRewardItemHoveredSignature OnRewardItemHovered;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPurchaseSeasonPass OnPurchaseSeasonPass;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPurchaseSeasonLevel OnPurchaseSeasonLevel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemContainer* m_itemInfoDetailContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ImageBase* m_seasonLogoImage;
    
public:
    UYWidget_SeasonOverview();

protected:
    UFUNCTION(BlueprintCallable)
    void StartCreatingSeasonsOverview(const TArray<FYSeasonRewardLevel>& seasonLevels, int32 startlevel);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSeasonsDataUpdated(const FYPlayerSeasonsData& playerSeasonsData);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerGrantsSeasonDataUpdated(const FYPlayerSeasonGrants& playerSeasonsData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnItemContainerClicked(UYWidget_ItemContainer* itemWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSeasonStaticDataUpdated(const FYSeasonRow& seasonRow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSeasonProgressDataUpdated(const FYPlayerSeasonsData& playerSeasonsData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSeasonGrantsDataUpdated(const FYPlayerSeasonGrants& playerSeasonsData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CreateSeasonRewardLevelEntry(const FYSeasonRewardLevel& seasonLevels, int32 Index);
    

    // Fix for true pure virtual functions not being implemented
};

