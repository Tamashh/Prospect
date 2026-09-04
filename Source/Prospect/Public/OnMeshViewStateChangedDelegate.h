#pragma once
#include "CoreMinimal.h"
#include "EYMeshViewState.h"
#include "OnMeshViewStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMeshViewStateChanged, EYMeshViewState, newViewState);

