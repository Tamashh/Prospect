#include "YWidget_LootNotificationsContainer.h"

UYWidget_LootNotificationsContainer::UYWidget_LootNotificationsContainer() {
    this->m_notificationsContainer = NULL;
    this->m_lootNotificationClass = NULL;
}


void UYWidget_LootNotificationsContainer::RemoveNotification(UYWidget_LootNotification* Widget) {
}

void UYWidget_LootNotificationsContainer::OnLootRewarded(AController* Instigator, const FYInventoryItem& rewardItem) {
}

void UYWidget_LootNotificationsContainer::OnLootCollected(AController* Instigator, AYPickupActor* pickup) {
}


