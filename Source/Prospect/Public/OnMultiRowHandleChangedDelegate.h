#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OnMultiRowHandleChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMultiRowHandleChanged, const TArray<FDataTableRowHandle>&, onMultiRowHandleChanges, const TArray<FDataTableRowHandle>&, newRowHandle);

