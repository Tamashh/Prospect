#include "YWidget_LootNotification.h"

UYWidget_LootNotification::UYWidget_LootNotification() {
    this->m_itemNameTextBlock = NULL;
    this->m_amountTextBlock = NULL;
    this->m_rarityImageBorders = NULL;
    this->m_itemImage = NULL;
    this->m_notificationDuration = 4.0f;
    this->m_itemImageSizeY = 60.0f;
}

void UYWidget_LootNotification::RemoveNotification() {
}

void UYWidget_LootNotification::OnIconLoaded(TSoftObjectPtr<UTexture2D> Icon) {
}





