#pragma once
#include "CoreMinimal.h"
#include "YAmmoUpdateInfo.h"
#include "OnAmmoChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAmmoChanged, const FYAmmoUpdateInfo&, ammoUpdateInfo);

