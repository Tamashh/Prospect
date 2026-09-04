#include "YAnimationFunctions.h"

UYAnimationFunctions::UYAnimationFunctions() {
}

EYHitZone UYAnimationFunctions::DetermineHitZoneWithZoneMapping(const FYDealtDamageData& Data, const TMap<EYHitZone, FName>& boneToHitZoneMapping) {
    return EYHitZone::None;
}


