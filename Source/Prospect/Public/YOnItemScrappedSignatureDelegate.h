#pragma once
#include "CoreMinimal.h"
#include "YOnItemScrappedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnItemScrappedSignature, const FString&, Error);

