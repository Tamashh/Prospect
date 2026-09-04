#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YResetFallingDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYResetFalling, const FVector&, Location, const FString&, Context);

