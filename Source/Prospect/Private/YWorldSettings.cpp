#include "YWorldSettings.h"

AYWorldSettings::AYWorldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = false;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_None;
    this->m_mapHaveLobby = false;
    this->m_mapTypeOverride = EYMapType::None;
    this->m_tutorialStart = NULL;
}


