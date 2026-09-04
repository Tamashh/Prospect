#pragma once
#include "CoreMinimal.h"
#include "YInventoryItem.h"
#include "YOnGeneratorCollectionSuccessfulBackendSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnGeneratorCollectionSuccessfulBackendSignature, const FString&, generatorId, const TArray<FYInventoryItem>&, crateItems);

