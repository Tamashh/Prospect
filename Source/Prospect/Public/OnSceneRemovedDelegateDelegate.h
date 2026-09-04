#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OnSceneRemovedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSceneRemovedDelegate, const FDataTableRowHandle, sceneRowHandle);

