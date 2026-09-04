#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "OnSpawnImpactEmitterDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSpawnImpactEmitter, const FDataTableRowHandle&, audioDataTableRow, const FVector&, SpawnLocation);

