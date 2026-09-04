#pragma once
#include "CoreMinimal.h"
#include "YGrant.h"
#include "Engine/DataTable.h"
#include "YWidget.h"
#include "EYProspectorLevelRewardType.h"
#include "Templates/SubclassOf.h"
#include "YProspectorLevelData.h"
#include "YWidget_ProspectorLevelRewardsPopup.generated.h"

class AYPlayerState;
class UAudioComponent;
class UTexture2D;
class UYWidget_ImageBase;
class UYWidget_ItemContainer;

UCLASS(Blueprintable, EditInlineNew, Config=Game)
class UYWidget_ProspectorLevelRewardsPopup : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYProspectorLevelRewardType m_prospectorLevelRewardType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYWidget_ItemContainer> m_itemEntryWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ImageBase* m_bgImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_unclaimedActiveProspectorLevelGrantIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_audioShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_audioClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_borderReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_iconReward;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UYWidget_ItemContainer*> m_itemWidgetEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* m_audioComponentCraftingInProgress;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYProspectorLevelData m_cachedPlayerProfileData;
    
public:
    UYWidget_ProspectorLevelRewardsPopup();

private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateSet(AYPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerSocialProfileDataUpdated(const FYProspectorLevelData& playerProfileData);
    
    UFUNCTION(BlueprintCallable)
    void OnGrantsUpdated(const TArray<FYGrant>& grants);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleCanSeeProspectorLevelPopupStateChanged(bool newState);
    
    UFUNCTION(BlueprintCallable)
    void ClaimRewards();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateRewardItems(const int32 numOfRewardItems);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdatePlayerSocialProfileData(const int32 newProspectorLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StartPopupAnimation();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetToDefault();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ItemContainer* BP_CreateAndAddItemEntryWidget();
    
};

