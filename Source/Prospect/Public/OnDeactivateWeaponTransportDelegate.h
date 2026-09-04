#pragma once
#include "CoreMinimal.h"
#include "OnDeactivateWeaponTransportDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeactivateWeaponTransport, AActor*, cancelActor);

