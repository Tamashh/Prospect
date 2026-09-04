#pragma once
#include "CoreMinimal.h"
#include "YTeleportData.h"
#include "OnAnyPlayerTeleportedDBNODelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAnyPlayerTeleportedDBNO, FYTeleportData, teleportData);

