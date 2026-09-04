#pragma once
#include "CoreMinimal.h"
#include "OnTagAddedDelegate.generated.h"

class UYCharacterLocationComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTagAdded, UYCharacterLocationComponent*, Component, FName, Tag);

