#pragma once
#include "CoreMinimal.h"
#include "OnTeleportChargsAmountChangedDelegate.generated.h"

class UYCharacterDBNOComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTeleportChargsAmountChanged, UYCharacterDBNOComponent*, dbnoComponent);

