#pragma once
#include "CoreMinimal.h"
#include "YUpdatedFactionProgression.h"
#include "YOnFactionProgressDataReceivedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnFactionProgressDataReceivedSignature, const FYUpdatedFactionProgression&, uiData);

