#pragma once
#include "CoreMinimal.h"
#include "YOnCharacterCustomizationDataChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnCharacterCustomizationDataChanged, AActor*, OwnerActor, const FString&, callerContext);

