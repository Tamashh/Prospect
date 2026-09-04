#include "YAIPlayerController_Match.h"
#include "YControllerInventoryAbilityComponent.h"
#include "YPlayerInteractionComponent.h"
#include "YWeaponPlayerControllerInventoryComponent.h"
#include "YWeaponPlayerControllerRuntimeComponent.h"

AYAIPlayerController_Match::AYAIPlayerController_Match(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_randomizeWeaponInventory = true;
    this->m_randomizeAbilities = true;
    this->m_runtimeWeaponComponent = CreateDefaultSubobject<UYWeaponPlayerControllerRuntimeComponent>(TEXT("YRuntimeComponent"));
    this->m_inventoryWeaponController = CreateDefaultSubobject<UYWeaponPlayerControllerInventoryComponent>(TEXT("YInventoryComponent"));
    this->m_abilityInventoryComponent = CreateDefaultSubobject<UYControllerInventoryAbilityComponent>(TEXT("AbilityComponent"));
    this->m_playerInteractionComponent = CreateDefaultSubobject<UYPlayerInteractionComponent>(TEXT("YPlayerInteractionComponent"));
}


