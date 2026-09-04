#pragma once
#include "CoreMinimal.h"
#include "OnActorAggroChangeRequestedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnActorAggroChangeRequested, AActor*, Actor, float, aggroChange, const FString&, Context);

