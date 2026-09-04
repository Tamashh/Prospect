#include "YItemDataTableRowBase.h"

FYItemDataTableRowBase::FYItemDataTableRowBase() {
    this->m_rarity = EYItemRarityType::Invalid;
    this->m_pickupClassOverride = NULL;
    this->m_maxAmountPerStack = 0;
    this->m_startAmount = 0;
    this->m_durabilityMax = 0;
    this->m_durabilityBrokenPriceModifier = 0.0f;
    this->m_repairCostMaxDurability = 0;
    this->m_repairCostBase = 0;
    this->m_repairCostModifierBroken = 0;
    this->misc_type = EYMiscellaneousType::Invalid;
    this->device_class = EYDeviceClass::None;
    this->device_category = EYDeviceCategory::AssaultRifle;
    this->ammo_type = EYAmmoType::None;
    this->starter = false;
    this->vanity_type = EYVanityType::None;
    this->itemWeight = 0.0f;
    this->m_isDefaultEntry = false;
    this->Slot = EYDefaultItemSlot::Unassigned;
    this->m_shouldOverrideInteractionTime = false;
    this->m_overrideInteractionTime = 0.0f;
    this->m_pickupWidgetOverride = NULL;
    this->m_amountPerPurchase = 0;
    this->m_scrappingFactionProgressionIncrement = 0;
    this->m_scrappingReturnDefault = 0;
    this->m_isBlueprint = false;
    this->m_collisionSpherePickUpOverride = 0.0f;
    this->m_useCustomMeshRelativeTranslationOverride = false;
}

