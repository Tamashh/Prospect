#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "Engine/Engine.h"
#include "YOnMapLoadedDelegate.generated.h"

UDELEGATE(BlueprintCallable, meta=(WorldContext="WorldContext")) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FYOnMapLoaded, FWorldContext&, WorldContext, const FURL&, URL, float, loadDuration);

