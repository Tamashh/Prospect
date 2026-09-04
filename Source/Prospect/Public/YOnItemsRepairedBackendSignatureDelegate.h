#pragma once
#include "CoreMinimal.h"
#include "EYRepairItemResult.h"
#include "YCustomItemInfo.h"
#include "YOnItemsRepairedBackendSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FYOnItemsRepairedBackendSignature, const FString&, UserId, const TArray<FYCustomItemInfo>&, infos, const EYRepairItemResult, Result);

