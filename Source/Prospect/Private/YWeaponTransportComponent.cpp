#include "YWeaponTransportComponent.h"

UYWeaponTransportComponent::UYWeaponTransportComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_nonReplicatedTransportHandle = 0;
    this->m_hitTransportType = EYTransportHitType::All;
    this->m_hitResultReaction = EYWeaponTransportHitResultType::NoImpactRetrace;
    this->m_spawnActorsOnImpact = true;
}

UYWeaponTransportComponent* UYWeaponTransportComponent::FindWeaponTransportComponentGivenContextHandle(UObject* Context, int32 Handle) {
    return NULL;
}


