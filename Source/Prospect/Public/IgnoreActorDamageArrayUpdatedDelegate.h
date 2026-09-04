#pragma once
#include "CoreMinimal.h"
#include "IgnoreActorDamageArrayUpdatedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIgnoreActorDamageArrayUpdated, const TArray<AActor*>&, actors);

