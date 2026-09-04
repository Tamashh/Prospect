#pragma once
#include "CoreMinimal.h"
#include "EYChannelType.h"
#include "OnChannelTypeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChannelTypeChanged, EYChannelType, ChannelType);

