#pragma once
#include "CoreMinimal.h"
#include "YOnItemIdChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnItemIdChangedSignature, const FString&, ID);

