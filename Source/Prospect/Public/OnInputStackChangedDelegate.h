#pragma once
#include "CoreMinimal.h"
#include "OnInputStackChangedDelegate.generated.h"

class UInputComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInputStackChanged, TArray<UInputComponent*>, newState);

