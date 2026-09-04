#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YAvailableVanity.h"
#include "YInventoryItem.h"
#include "YWidget_Weapon_Vanity.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_Weapon_Vanity : public UYWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYAvailableVanity m_cachedAvailableVanity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_previousInspectedInventoryItemId;
    
public:
    UYWidget_Weapon_Vanity();

private:
    UFUNCTION(BlueprintCallable)
    void RefreshAvailableVanity();
    
    UFUNCTION(BlueprintCallable)
    void OnInspectedInventoryItemUpdatedCallback(FYInventoryItem newInventoryItem);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYAvailableVanity GetAvailableVanity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AvailableVanityUpdated(const FYAvailableVanity& availableVanity);
    
};

