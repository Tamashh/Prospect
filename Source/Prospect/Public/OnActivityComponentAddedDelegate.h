#pragma once
#include "CoreMinimal.h"
#include "OnActivityComponentAddedDelegate.generated.h"

class UYActivityComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActivityComponentAdded, UYActivityComponent*, componentAdded);

