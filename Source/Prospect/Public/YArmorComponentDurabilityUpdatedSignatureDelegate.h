#pragma once
#include "CoreMinimal.h"
#include "YActiveArmorData.h"
#include "YArmorComponentDurabilityUpdatedSignatureDelegate.generated.h"

class UYArmorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FYArmorComponentDurabilityUpdatedSignature, UYArmorComponent*, armorComponent, const FYActiveArmorData&, armor, int32, previousDurability);

