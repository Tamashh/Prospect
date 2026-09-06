#include "YWeaponPlayerControllerInventoryComponent.h"
#include "Net/UnrealNetwork.h"

UYWeaponPlayerControllerInventoryComponent::UYWeaponPlayerControllerInventoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_characterWeaponComponent = NULL;
    this->m_characterStateComponent = NULL;
    this->m_runtimeWeaponComponent = NULL;
    this->m_cosmeticComponent = NULL;
}

void UYWeaponPlayerControllerInventoryComponent::SwitchWeapon(int32 Index) {
}

void UYWeaponPlayerControllerInventoryComponent::SwitchPreviousWeapon() {
}

void UYWeaponPlayerControllerInventoryComponent::SwitchNextWeapon() {
}

void UYWeaponPlayerControllerInventoryComponent::ServerEquipNewWeapon_Implementation(int32 weaponIndex) {
}
bool UYWeaponPlayerControllerInventoryComponent::ServerEquipNewWeapon_Validate(int32 weaponIndex) {
    return true;
}

void UYWeaponPlayerControllerInventoryComponent::ServerAddAndEquipItem_Implementation(FDataTableRowHandle itemRowHandle) {
}
bool UYWeaponPlayerControllerInventoryComponent::ServerAddAndEquipItem_Validate(FDataTableRowHandle itemRowHandle) {
    return true;
}

void UYWeaponPlayerControllerInventoryComponent::OnTransportComponentDestroyed(int32 transportHandle) {
}

void UYWeaponPlayerControllerInventoryComponent::OnRep_StoredWeaponInformationUpdated() const {
}

void UYWeaponPlayerControllerInventoryComponent::OnPlayerSetUpdated(UYStateInventoryComponent* stateInventoryComponent) {
}

void UYWeaponPlayerControllerInventoryComponent::OnPawnAssigned(APawn* oldPawn, APawn* newPawn) {
}

void UYWeaponPlayerControllerInventoryComponent::OnInventoryUpdated(UYStateInventoryComponent* stateInventoryComponent) {
}

void UYWeaponPlayerControllerInventoryComponent::OnCustomizationDataUpdated(FYActiveCustomizationData oldData, FYActiveCustomizationData newData, bool ForceRefresh) {
}

void UYWeaponPlayerControllerInventoryComponent::OnAmmoChanged(const FYAmmoUpdateInfo& ammoUpdateInfo) {
}

bool UYWeaponPlayerControllerInventoryComponent::IsWeaponOwned(const FDataTableRowHandle& rowHandle, const FString& CustomId) {
    return false;
}

bool UYWeaponPlayerControllerInventoryComponent::IsWeaponActive(const FDataTableRowHandle& rowHandle) const {
    return false;
}

void UYWeaponPlayerControllerInventoryComponent::Initialize() {
}

FName UYWeaponPlayerControllerInventoryComponent::GetActiveWeapon() const {
    return NAME_None;
}

void UYWeaponPlayerControllerInventoryComponent::DebugAddMod(const FDataTableRowHandle& newMod) {
}

void UYWeaponPlayerControllerInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYWeaponPlayerControllerInventoryComponent, m_weaponEntries);
}


