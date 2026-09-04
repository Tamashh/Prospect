#pragma once
#include "CoreMinimal.h"
#include "YContractRow.h"
#include "YOnPressedAcceptButtonSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnPressedAcceptButtonSignature, FYContractRow, contractConfigData);

