#pragma once
#include "CoreMinimal.h"
#include "YGlobalVanityItem.h"
#include "OnEmoteInterruptedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEmoteInterrupted, FYGlobalVanityItem, usedEmote, AActor*, Instigator);
