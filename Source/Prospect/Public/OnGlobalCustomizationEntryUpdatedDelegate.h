#pragma once
#include "CoreMinimal.h"
#include "EYVanityType.h"
#include "OnGlobalCustomizationEntryUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGlobalCustomizationEntryUpdated, const TArray<EYVanityType>&, Types);

