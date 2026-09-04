#pragma once
#include "CoreMinimal.h"
#include "YTwitchDropPackage.h"
#include "YOnTwitchDropPackagesReceivedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnTwitchDropPackagesReceivedSignature, const TArray<FYTwitchDropPackage>&, packages);

