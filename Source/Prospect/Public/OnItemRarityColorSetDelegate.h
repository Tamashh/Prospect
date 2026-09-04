#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "OnItemRarityColorSetDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemRarityColorSet, const FSlateColor&, rarityColor);

