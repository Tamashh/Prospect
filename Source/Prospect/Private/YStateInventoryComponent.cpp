#include "YStateInventoryComponent.h"
#include "Net/UnrealNetwork.h"

UYStateInventoryComponent::UYStateInventoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_isSlotInventory = false;
    this->m_componentId = -1;
}

void UYStateInventoryComponent::SyncClientAndServerInventory() {
}

void UYStateInventoryComponent::SetPlayerStash(const FYPlayerInventory& unvalidatedPlayerStash, const bool sentFromBackend) {
}

void UYStateInventoryComponent::SetPlayerSet(const FYPlayerDataSet& playerSet) {
}

void UYStateInventoryComponent::SetPlayerInventory(const FYPlayerInventory& unvalidatedPlayerInventory, const bool sentFromBackend) {
}

void UYStateInventoryComponent::SetInventoryLocking(bool lockMovementFromToInventory) {
}

void UYStateInventoryComponent::SetInventoryInfo(const FYInventoryInfo& Info) {
}

void UYStateInventoryComponent::SetComponentId(const int32 newComponentId) {
}

void UYStateInventoryComponent::OnRep_PlayerSet(const FYPlayerDataSet& previousPlayerDataSet) {
}

void UYStateInventoryComponent::OnRep_PlayerInventory(const FYPlayerInventory& previousPlayerInventory) {
}

void UYStateInventoryComponent::OnRep_InventoryInfo() {
}

void UYStateInventoryComponent::OnRep_ComponentID(int32 oldComponentId) {
}

void UYStateInventoryComponent::OnGPAReplicatedCallback() {
}

void UYStateInventoryComponent::ItemSwapCalled(const FYInventoryItem& itemToRecord, EYPlayerSetType originSetType, EYPlayerSetType targetSetType) {
}

FYInventorySnapshot UYStateInventoryComponent::GetServerDataSnapshot() const {
    return FYInventorySnapshot{};
}

FYRuntimeInventoryWeightInfo UYStateInventoryComponent::GetRuntimeInventoryWeightInfo() const {
    return FYRuntimeInventoryWeightInfo{};
}

FYPlayerInventory UYStateInventoryComponent::GetPlayerStash() const {
    return FYPlayerInventory{};
}

FYPlayerDataSet UYStateInventoryComponent::GetPlayerSet() const {
    return FYPlayerDataSet{};
}

FYPlayerInventory UYStateInventoryComponent::GetPlayerInventory() const {
    return FYPlayerInventory{};
}

bool UYStateInventoryComponent::GetPlayerBagItem(FYInventoryItem& bagItem, int32& bagIndex) const {
    return false;
}

FYInventoryInfo UYStateInventoryComponent::GetInventoryInfo() const {
    return FYInventoryInfo{};
}

TArray<FString> UYStateInventoryComponent::GetCustomIdsForSafePocketsItemsConsumedInMatch() const {
    return TArray<FString>();
}

int32 UYStateInventoryComponent::GetComponentId() const {
    return 0;
}

UYStateInventoryComponent* UYStateInventoryComponent::FindStateInventoryComponent(AActor* actorContext) {
    return NULL;
}

void UYStateInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYStateInventoryComponent, m_playerInventory);
    DOREPLIFETIME(UYStateInventoryComponent, m_playerSet);
    DOREPLIFETIME(UYStateInventoryComponent, m_inventoryInfo);
    DOREPLIFETIME(UYStateInventoryComponent, m_componentId);
    DOREPLIFETIME(UYStateInventoryComponent, m_runtimeInventoryWeightInfo);
}


