#pragma once
#include "CoreMinimal.h"
#include "YInventoryItem.h"
#include "YOnGeneratorCollectionSuccessfulSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnGeneratorCollectionSuccessfulSignature, const FString&, generatorId, const TArray<FYInventoryItem>&, crateItems);

