#pragma once
#include "CoreMinimal.h"
#include "YGlobalVanityItem.h"
#include "OnBannerSpawnedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBannerSpawned, FYGlobalVanityItem, spawnedBanner, AActor*, Instigator);

