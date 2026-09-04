#pragma once
#include "CoreMinimal.h"
#include "EYCachedSpawnLocationType.h"
#include "YPlayerSpawnLocationInfo.h"
#include "OnSpawnLocationSetDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSpawnLocationSet, FYPlayerSpawnLocationInfo, Data, EYCachedSpawnLocationType, Type, const FString&, contextStr);

