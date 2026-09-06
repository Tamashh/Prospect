#pragma once
#include "CoreMinimal.h"
#include "YCompletedMissionIdsUpdatedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYCompletedMissionIdsUpdatedSignature, const TArray<FString>&, CompletedMissionIdsUpdated);
