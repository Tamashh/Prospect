#pragma once
#include "CoreMinimal.h"
#include "OnActivateWeaponTransportDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActivateWeaponTransport, AActor*, newActor);

