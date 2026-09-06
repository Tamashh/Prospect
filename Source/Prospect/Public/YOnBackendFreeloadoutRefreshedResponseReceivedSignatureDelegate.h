#pragma once
#include "CoreMinimal.h"
#include "YTimestamp.h"
#include "YOnBackendFreeloadoutRefreshedResponseReceivedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnBackendFreeloadoutRefreshedResponseReceivedSignature, const int32, newRandomSeed, const FYTimestamp&, loadoutExpirationTimeSecondsUtc);
