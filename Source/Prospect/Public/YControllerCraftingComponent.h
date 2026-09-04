#pragma once
#include "CoreMinimal.h"
#include "EYPurchaseWeaponShopItemStatus.h"
#include "EYStartItemCraftingResultStatus.h"
#include "YCraftedBlueprintInfo.h"
#include "Components/ActorComponent.h"
#include "YCraftingInProgressData.h"
#include "YOnClaimedItemResponseReceivedSignatureDelegate.h"
#include "YOnItemCraftedClaimedFailResponseReceivedSignatureDelegate.h"
#include "YOnItemCraftingStartedFailResponseReceivedSignatureDelegate.h"
#include "YOnItemCraftingStartedReceivedSignatureDelegate.h"
#include "YOnItemScrappedSignatureDelegate.h"
#include "YOnWeaponShopItemPurchaseResponseReceivedBackendOldSignatureDelegate.h"
#include "YShopItem.h"
#include "YControllerCraftingComponent.generated.h"

class UObject;
class UYControllerCraftingComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYControllerCraftingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnItemScrappedSignature OnItemScrapped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnItemCraftingStartedFailResponseReceivedSignature OnItemCraftingStartedResponseReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnItemCraftingStartedReceivedSignature OnItemCraftingSetInProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnWeaponShopItemPurchaseResponseReceivedBackendOldSignature OnWeaponShopItemPurchaseResponseReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnItemCraftedClaimedFailResponseReceivedSignature OnItemCraftedClaimedResponseReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnClaimedItemResponseReceivedSignature OnClaimedItemResponseReceived;
    
    UYControllerCraftingComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SetCraftingInProgress(const FString& UserId, const FYCraftingInProgressData& craftingInProgressData);
    
public:
    UFUNCTION(BlueprintCallable)
    void SellItems(const TArray<FString>& idsToScrap, const FName& factionId);
    
    UFUNCTION(BlueprintCallable)
    void PurchaseItem(const FYShopItem& shopItem, const int32 repeatTimes);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnItemScrappedResult(const FString& Error);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCraftingInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingTimeSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetItemBeingCrafted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerCraftingComponent* FindCraftingComponentChecked(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerCraftingComponent* FindCraftingComponent(UObject* objectContext);
    
private:
    UFUNCTION(BlueprintCallable)
    void BackendResponseReceivedForItemPurchased(EYPurchaseWeaponShopItemStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void BackendResponseReceivedForItemCraftingStarted(EYStartItemCraftingResultStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void BackendResponseReceivedForItemCrafted(const bool craftingFailed);
    
    UFUNCTION(BlueprintCallable)
    void BackendClaimedItemReceived(const FYCraftedBlueprintInfo& craftedBlueprintInfo);
    
};

