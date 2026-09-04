#pragma once
#include "CoreMinimal.h"
#include "EYCustomizationModelType.h"
#include "YOnCharacterVanityUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnCharacterVanityUpdated, EYCustomizationModelType, Type);

