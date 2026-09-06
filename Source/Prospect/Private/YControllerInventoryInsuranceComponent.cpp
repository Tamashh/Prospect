#include "YControllerInventoryInsuranceComponent.h"
#include "Net/UnrealNetwork.h"

UYControllerInventoryInsuranceComponent::UYControllerInventoryInsuranceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_insuranceVoidedOnDeath = false;
}

bool UYControllerInventoryInsuranceComponent::WasInsuranceVoidedOnDeath() const {
    return false;
}

void UYControllerInventoryInsuranceComponent::SetPendingInsuranceTokens(int32 Amount) {
}

void UYControllerInventoryInsuranceComponent::SetItemPendingInsurance(EYInsuranceType insurance, const FString& ItemInstanceId) {
}

void UYControllerInventoryInsuranceComponent::OnRep_InsuredItems() {
}

void UYControllerInventoryInsuranceComponent::OnRep_InsuredAttachments() {
}

bool UYControllerInventoryInsuranceComponent::HasPendingInsurance() const {
    return false;
}

bool UYControllerInventoryInsuranceComponent::HasInsurance(bool includeStash) const {
    return false;
}

void UYControllerInventoryInsuranceComponent::HandleOnPlayerSetUpdatedOnStation(UYStateInventoryComponent* stateInventoryComponent) {
}

void UYControllerInventoryInsuranceComponent::HandleOnPlayerSetItemAddedOrUpdatedInMatch(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item, EYPlayerSetType equippedSetType) {
}

void UYControllerInventoryInsuranceComponent::HandleOnInventoryInitialized() {
}

void UYControllerInventoryInsuranceComponent::HandleOnInventoryDataUpdated(const TArray<EYInventoryPlayerTypes>& typesChanged) {
}

void UYControllerInventoryInsuranceComponent::HandleOnInsurancePayoutPackageVoided(const TArray<FYInsurancePayoutPackage>& remainingPackages) {
}

void UYControllerInventoryInsuranceComponent::HandleOnFetchInsuredAttachments(const TArray<FYInsuredAttachment>& attachments) {
}

void UYControllerInventoryInsuranceComponent::HandleOnFetchInsuranceInvoice(const TArray<FString>& unpaidInsuredItemInstanceIds) {
}

void UYControllerInventoryInsuranceComponent::HandleOnFetchInsuranceClaims(const TArray<FYInsurancePayoutPackage>& packages) {
}

void UYControllerInventoryInsuranceComponent::HandleOnDeath() {
}

void UYControllerInventoryInsuranceComponent::HandleOnClaimVictimCompensationPackageCompeleted(bool success, const FString& Guid, const FYClaimableVictimCompensation& claimedPackage) {
}

void UYControllerInventoryInsuranceComponent::HandleOnClaimInsurancePayoutPackageCompleted(bool success) {
}

void UYControllerInventoryInsuranceComponent::HandleOnClaimInsurancePayoutPackage(const FYInsurancePayoutPackage& Package, int32 Index) {
}

TArray<FYInsuredItem> UYControllerInventoryInsuranceComponent::GetPendingItemsByInsuranceType(EYInsuranceType insurance) const {
    return TArray<FYInsuredItem>();
}

TArray<FYInsuredItem> UYControllerInventoryInsuranceComponent::GetPendingItems() const {
    return TArray<FYInsuredItem>();
}

int32 UYControllerInventoryInsuranceComponent::GetPendingInsuranceTokens() const {
    return 0;
}

EYInsuranceType UYControllerInventoryInsuranceComponent::GetPendingInsuranceForItem(const FYInventoryItem& Item) const {
    return EYInsuranceType::None;
}

EYInsuranceType UYControllerInventoryInsuranceComponent::GetPendingInsuranceForAttachment(const FYInventoryItem& BaseItem, const FString& modRowName) const {
    return EYInsuranceType::None;
}

TArray<FYInsurancePayoutPackage> UYControllerInventoryInsuranceComponent::GetPendingInsuranceClaims() const {
    return TArray<FYInsurancePayoutPackage>();
}

void UYControllerInventoryInsuranceComponent::GetOldestInsurancePackage(FYInsurancePayoutPackage& outPackage, bool& outIsUnlocked) const {
}

TArray<FYInsuredItem> UYControllerInventoryInsuranceComponent::GetInsuredItemsByInsuranceType(EYInsuranceType insurance, bool includeStash) const {
    return TArray<FYInsuredItem>();
}

TArray<FYInsuredItem> UYControllerInventoryInsuranceComponent::GetInsuredItems(bool includeStash) const {
    return TArray<FYInsuredItem>();
}

EYInsuranceStatus UYControllerInventoryInsuranceComponent::GetInsuranceStatusForItemId(int32 itemInventoryComponentId, const FString& ItemInstanceId) const {
    return EYInsuranceStatus::None;
}

EYInsuranceStatus UYControllerInventoryInsuranceComponent::GetInsuranceStatusForItem(const FYInventoryItem& Item) const {
    return EYInsuranceStatus::None;
}

EYInsuranceStatus UYControllerInventoryInsuranceComponent::GetInsuranceStatusForAttachment(const FYInventoryItem& BaseItem, const FString& modRowName) const {
    return EYInsuranceStatus::None;
}

EYInsuranceType UYControllerInventoryInsuranceComponent::GetInsuranceForItemId(const FString& ItemInstanceId) const {
    return EYInsuranceType::None;
}

EYInsuranceType UYControllerInventoryInsuranceComponent::GetInsuranceForItem(const FYInventoryItem& Item) const {
    return EYInsuranceType::None;
}

EYInsuranceType UYControllerInventoryInsuranceComponent::GetInsuranceForAttachment(const FYInventoryItem& BaseItem, const FString& modRowName) const {
    return EYInsuranceType::None;
}

void UYControllerInventoryInsuranceComponent::GetInsuranceClaimStorage(int32& outCurrent, int32& outMax, bool& outIsFull) const {
}

TArray<FYInsurancePayoutPackage> UYControllerInventoryInsuranceComponent::GetAvailableInsuranceClaims() const {
    return TArray<FYInsurancePayoutPackage>();
}

void UYControllerInventoryInsuranceComponent::FetchInsuranceClaims() {
}

void UYControllerInventoryInsuranceComponent::ClaimOldestAvailableInsurancePackage() {
}

bool UYControllerInventoryInsuranceComponent::CanItemBeInsured(const FYInventoryItem& Item) const {
    return false;
}

bool UYControllerInventoryInsuranceComponent::CanClaimOldestAvailableInsurancePackage(EYInsuranceClaimResult& OutResult) const {
    return false;
}

FYInsuranceOffer UYControllerInventoryInsuranceComponent::CalculatePendingInsuranceOfferWithItemAdded(const FYInventoryItem& Item, EYInsuranceType insurance) const {
    return FYInsuranceOffer{};
}

FYInsuranceOffer UYControllerInventoryInsuranceComponent::CalculatePendingInsuranceOffer() const {
    return FYInsuranceOffer{};
}

FYInsurancePayoutPackage UYControllerInventoryInsuranceComponent::CalculateInsurancePayoutPackage(const TArray<FYInsuredItem>& insuredItems) const {
    return FYInsurancePayoutPackage{};
}

void UYControllerInventoryInsuranceComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYControllerInventoryInsuranceComponent, m_insuredItems);
    DOREPLIFETIME(UYControllerInventoryInsuranceComponent, m_insuredAttachments);
    DOREPLIFETIME(UYControllerInventoryInsuranceComponent, m_insuranceVoidedOnDeath);
}


