#pragma once
#include "CoreMinimal.h"
#include "YPlayerSeasonsData.h"
#include "Engine/DataTable.h"
#include "Camera/PlayerCameraManager.h"
#include "YWidget.h"
#include "YSeasonRow.h"
#include "YWidget_Seasons.generated.h"

class UYWidget_ItemContainer;
class UYWidget_SpecificOffersOverview;

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_Seasons : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_SpecificOffersOverview* m_specificOffersOverview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_onLeftFortunaPassToShopMenuFadeOutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_onLeftFortunaPassToShopMenuFadeInDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_onLeftFortunaPassToShopMenuFadeInDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewTargetTransitionParams m_transitionParams;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_seasonLevelOffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_goToCurrencyOffersRowHandle;
    
public:
    UYWidget_Seasons();

private:
    UFUNCTION(BlueprintCallable)
    void TryFadeFromBlackAfterFortunaPassLeft();
    
    UFUNCTION(BlueprintCallable)
    void OnSeasonsDataUpdated(const FYPlayerSeasonsData& playerSeasonsData);
    
    UFUNCTION(BlueprintCallable)
    void OnPurchaseSeasonPass();
    
    UFUNCTION(BlueprintCallable)
    void OnPurchaseSeasonLevel();
    
    UFUNCTION(BlueprintCallable)
    void HandleRewardItemClicked(UYWidget_ItemContainer* itemWidget);
    
    UFUNCTION(BlueprintCallable)
    void GoToCurrencyOffers();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSeasonStaticDataUpdated(const FYSeasonRow& seasonRow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSeasonProgressDataUpdated(const FYPlayerSeasonsData& playerSeasonsData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_SpecificOffersOverview* BP_CreateSpecificOffersOverview();
    
};

