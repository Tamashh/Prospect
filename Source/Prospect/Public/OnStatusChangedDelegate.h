#pragma once
#include "CoreMinimal.h"
#include "OnStatusChangedDelegate.generated.h"

class AYActivityLocation;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStatusChanged, AYActivityLocation*, Location);

