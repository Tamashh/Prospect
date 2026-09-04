#pragma once
#include "CoreMinimal.h"
#include "CurrentHealthChangedSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCurrentHealthChangedSignature, float, CurrentHealth, AActor*, Instigator);

