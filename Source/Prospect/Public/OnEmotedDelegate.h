#pragma once
#include "CoreMinimal.h"
#include "YGlobalVanityItem.h"
#include "OnEmotedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEmoted, FYGlobalVanityItem, usedEmote, AActor*, Instigator);

