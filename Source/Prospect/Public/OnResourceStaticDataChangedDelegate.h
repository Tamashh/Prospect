#pragma once
#include "CoreMinimal.h"
#include "OnResourceStaticDataChangedDelegate.generated.h"

class UYResourceComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnResourceStaticDataChanged, UYResourceComponent*, resourceComponent);

