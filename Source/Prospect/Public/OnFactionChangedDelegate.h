#pragma once
#include "CoreMinimal.h"
#include "OnFactionChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFactionChanged, FName, factionId);

