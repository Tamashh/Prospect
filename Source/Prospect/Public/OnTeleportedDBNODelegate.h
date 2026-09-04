#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnTeleportedDBNODelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnTeleportedDBNO, FVector, OldLocation, FVector, NewLocation, AActor*, relevantActor);

