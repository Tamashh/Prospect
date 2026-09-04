#pragma once
#include "CoreMinimal.h"
#include "Chaos/ChaosEngineInterface.h"
#include "OnPlayFootstepDelegate.generated.h"

class UPhysicalMaterial;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayFootstep, UPhysicalMaterial*, PhysMaterial, TEnumAsByte<EPhysicalSurface>, surfaceType);

