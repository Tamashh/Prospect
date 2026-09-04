#pragma once
#include "CoreMinimal.h"
#include "OnLeaveDBNODelegate.generated.h"

class AController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLeaveDBNO, const AController*, Controller);

