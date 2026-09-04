#pragma once
#include "CoreMinimal.h"
#include "OnEnterDBNODelegate.generated.h"

class AController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnterDBNO, const AController*, Controller);

