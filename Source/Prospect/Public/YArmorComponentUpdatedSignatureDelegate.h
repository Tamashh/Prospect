#pragma once
#include "CoreMinimal.h"
#include "YArmorComponentUpdatedSignatureDelegate.generated.h"

class UYArmorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYArmorComponentUpdatedSignature, UYArmorComponent*, armorComponent);

