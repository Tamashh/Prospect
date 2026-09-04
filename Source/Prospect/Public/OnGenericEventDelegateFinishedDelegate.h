#pragma once
#include "CoreMinimal.h"
#include "EYMissionResultType.h"
#include "OnGenericEventDelegateFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGenericEventDelegateFinished, EYMissionResultType, Result);

