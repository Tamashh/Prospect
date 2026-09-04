#pragma once
#include "CoreMinimal.h"
#include "OnPersistentDataPurgedDelegate.generated.h"

class UYPersistentData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPersistentDataPurged, UYPersistentData*, dataPurged);

