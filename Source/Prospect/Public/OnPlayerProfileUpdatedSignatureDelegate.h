#pragma once
#include "CoreMinimal.h"
#include "YProspectorLevelData.h"
#include "OnPlayerProfileUpdatedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerProfileUpdatedSignature, const FYProspectorLevelData&, prospectorLevelData);

