#pragma once
#include "CoreMinimal.h"
#include "YOnCompletedContractDataUpdatedDelegate.generated.h"

class UYControllerContractsActivesDataComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnCompletedContractDataUpdated, UYControllerContractsActivesDataComponent*, Component);

