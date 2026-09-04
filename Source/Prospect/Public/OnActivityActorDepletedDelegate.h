#pragma once
#include "CoreMinimal.h"
#include "OnActivityActorDepletedDelegate.generated.h"

class UYActivityComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActivityActorDepleted, UYActivityComponent*, Component);

