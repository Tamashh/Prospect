#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OnRowHandleChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRowHandleChanged, FDataTableRowHandle, oldRowHandle, FDataTableRowHandle, newRowHandle);

