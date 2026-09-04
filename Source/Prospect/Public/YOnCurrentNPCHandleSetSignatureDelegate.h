#pragma once
#include "CoreMinimal.h"
#include "YOnCurrentNPCHandleSetSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnCurrentNPCHandleSetSignature, const FName&, factionId);

