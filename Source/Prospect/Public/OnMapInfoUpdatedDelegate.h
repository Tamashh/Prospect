#pragma once
#include "CoreMinimal.h"
#include "OnMapInfoUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMapInfoUpdated, const FString&, mapInfoRowId);

