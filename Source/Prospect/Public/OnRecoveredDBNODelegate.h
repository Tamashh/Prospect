#pragma once
#include "CoreMinimal.h"
#include "OnRecoveredDBNODelegate.generated.h"

class AController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRecoveredDBNO, const AController*, Controller);

