#pragma once
#include "CoreMinimal.h"
#include "YBackendFreeLoadout.h"
#include "YOnBackendFreeloadoutsDebugSetResponseReceivedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnBackendFreeloadoutsDebugSetResponseReceivedSignature, const FYBackendFreeLoadout&, backendFreeLoadout);
