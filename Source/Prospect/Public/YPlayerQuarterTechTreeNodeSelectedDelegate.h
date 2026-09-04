#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YPlayerQuarterTechTreeNodeSelectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYPlayerQuarterTechTreeNodeSelected, const FDataTableRowHandle&, rowHandle);

