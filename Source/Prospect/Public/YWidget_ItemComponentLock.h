#pragma once
#include "CoreMinimal.h"
#include "YFactionProgress.h"
#include "YGrant.h"
#include "YPlayerSeasonsData.h"
#include "YShopOffer.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentLock.generated.h"

class UYWidget_ItemContainer;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentLock : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
    UYWidget_ItemComponentLock();

private:
    UFUNCTION(BlueprintCallable)
    void OnSeasonsDataUpdated(const FYPlayerSeasonsData& playerSeasonsData);
    
    UFUNCTION(BlueprintCallable)
    void OnItemActiveChanged(UYWidget_ItemContainer* Widget, bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    void OnGrantsUpdated(const TArray<FYGrant>& grants);
    
    UFUNCTION(BlueprintCallable)
    void OnFactionProgressionUpdate(const TArray<FYFactionProgress>& factionProgress);
    
    UFUNCTION(BlueprintCallable)
    void OnActiveOffersUpdated(const TArray<FYShopOffer>& activeOffers);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetIsMissionCompleted(bool isCompleted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetIsItemOwned(bool isOwned);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetIsFactionLevelUnlocked(bool isUnlocked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetIsAcquiredFromShopOffer(bool isAcquired, bool isOfferCurrentlyActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetIsAcquiredFromSeason(bool isAcquired, bool isFromCurrentSeason, bool isPaidPass);
    
};

