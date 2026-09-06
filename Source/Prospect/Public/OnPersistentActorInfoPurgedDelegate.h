#pragma once
#include "CoreMinimal.h"
#include "OnPersistentActorInfoPurgedDelegate.generated.h"

class UYPersistentActorInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPersistentActorInfoPurged, UYPersistentActorInfo*, Info);
