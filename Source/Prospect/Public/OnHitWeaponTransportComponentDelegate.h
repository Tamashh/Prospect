#pragma once
#include "CoreMinimal.h"
#include "YImpactInitializationData.h"
#include "OnHitWeaponTransportComponentDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHitWeaponTransportComponent, FYImpactInitializationData, initializationData);

