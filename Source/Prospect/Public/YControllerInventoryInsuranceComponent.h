#pragma once
#include "CoreMinimal.h"
#include "EYInsuranceType.h"
#include "YInsuredAttachment.h"
#include "YInsuredItem.h"
#include "Components/ActorComponent.h"
#include "EYInsuranceClaimResult.h"
#include "EYInsuranceStatus.h"
#include "EYInventoryPlayerTypes.h"
#include "EYPlayerSetType.h"
#include "YClaimableVictimCompensation.h"
#include "YControllerInventoryInsuranceRequestCompletedSignatureDelegate.h"
#include "YControllerInventoryInsuranceUpdatedSignatureDelegate.h"
#include "YInsuranceOffer.h"
#include "YInsurancePayoutPackage.h"
#include "YInventoryItem.h"
#include "YControllerInventoryInsuranceComponent.generated.h"

class UYStateInventoryComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYControllerInventoryInsuranceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYControllerInventoryInsuranceUpdatedSignature OnInsuranceUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYControllerInventoryInsuranceUpdatedSignature OnInsuranceClaimsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYControllerInventoryInsuranceRequestCompletedSignature OnClaimInsurancePayoutPackageCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYControllerInventoryInsuranceUpdatedSignature OnInsurancePayoutPackageVoided;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InsuredItems, meta=(AllowPrivateAccess=true))
    TArray<FYInsuredItem> m_insuredItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InsuredAttachments, meta=(AllowPrivateAccess=true))
    TArray<FYInsuredAttachment> m_insuredAttachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_insuranceVoidedOnDeath;
    
public:
    UYControllerInventoryInsuranceComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasInsuranceVoidedOnDeath() const;
    
    UFUNCTION(BlueprintCallable)
    void SetPendingInsuranceTokens(int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void SetItemPendingInsurance(EYInsuranceType insurance, const FString& ItemInstanceId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_InsuredItems();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InsuredAttachments();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPendingInsurance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInsurance(bool includeStash) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnPlayerSetUpdatedOnStation(UYStateInventoryComponent* stateInventoryComponent);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnPlayerSetItemAddedOrUpdatedInMatch(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item, EYPlayerSetType equippedSetType);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnInventoryInitialized();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnInventoryDataUpdated(TArray<EYInventoryPlayerTypes> changed);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnInsurancePayoutPackageVoided(const TArray<FYInsurancePayoutPackage>& remainingPackages);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnFetchInsuredAttachments(const TArray<FYInsuredAttachment>& attachments);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnFetchInsuranceInvoice(const TArray<FString>& unpaidInsuredItemInstanceIds);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnFetchInsuranceClaims(const TArray<FYInsurancePayoutPackage>& packages);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnDeath();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnClaimVictimCompensationPackageCompeleted(bool success, const FString& Guid, const FYClaimableVictimCompensation& claimedPackage);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnClaimInsurancePayoutPackageCompleted(bool success);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnClaimInsurancePayoutPackage(const FYInsurancePayoutPackage& Package, int32 Index);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FYInsuredItem> GetPendingItemsByInsuranceType(EYInsuranceType insurance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FYInsuredItem> GetPendingItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPendingInsuranceTokens() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYInsuranceType GetPendingInsuranceForItem(const FYInventoryItem& Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYInsuranceType GetPendingInsuranceForAttachment(const FYInventoryItem& BaseItem, const FString& modRowName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FYInsurancePayoutPackage> GetPendingInsuranceClaims() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOldestInsurancePackage(FYInsurancePayoutPackage& outPackage, bool& outIsUnlocked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FYInsuredItem> GetInsuredItemsByInsuranceType(EYInsuranceType insurance, bool includeStash) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FYInsuredItem> GetInsuredItems(bool includeStash) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYInsuranceStatus GetInsuranceStatusForItemId(int32 itemInventoryComponentId, const FString& ItemInstanceId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYInsuranceStatus GetInsuranceStatusForItem(const FYInventoryItem& Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYInsuranceStatus GetInsuranceStatusForAttachment(const FYInventoryItem& BaseItem, const FString& modRowName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYInsuranceType GetInsuranceForItemId(const FString& ItemInstanceId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYInsuranceType GetInsuranceForItem(const FYInventoryItem& Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYInsuranceType GetInsuranceForAttachment(const FYInventoryItem& BaseItem, const FString& modRowName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetInsuranceClaimStorage(int32& outCurrent, int32& outMax, bool& outIsFull) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FYInsurancePayoutPackage> GetAvailableInsuranceClaims() const;
    
    UFUNCTION(BlueprintCallable)
    void FetchInsuranceClaims();
    
    UFUNCTION(BlueprintCallable)
    void ClaimOldestAvailableInsurancePackage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanItemBeInsured(const FYInventoryItem& Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanClaimOldestAvailableInsurancePackage(EYInsuranceClaimResult& OutResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYInsuranceOffer CalculatePendingInsuranceOfferWithItemAdded(const FYInventoryItem& Item, EYInsuranceType insurance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYInsuranceOffer CalculatePendingInsuranceOffer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYInsurancePayoutPackage CalculateInsurancePayoutPackage(const TArray<FYInsuredItem>& insuredItems) const;
    
};

