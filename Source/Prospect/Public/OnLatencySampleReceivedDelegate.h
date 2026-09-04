#pragma once
#include "CoreMinimal.h"
#include "OnLatencySampleReceivedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLatencySampleReceived, double, latency);

