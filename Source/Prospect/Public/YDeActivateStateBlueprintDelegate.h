#pragma once
#include "CoreMinimal.h"
#include "YDeActivateStateBlueprintDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FYDeActivateStateBlueprint, bool, interupted);

