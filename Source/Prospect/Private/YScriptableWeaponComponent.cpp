#include "YScriptableWeaponComponent.h"

UYScriptableWeaponComponent::UYScriptableWeaponComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_controllerWeaponRuntimeComponent = NULL;
    this->m_characterWeaponComponent = NULL;
    this->m_persistentWeaponDataComponent = NULL;
}


