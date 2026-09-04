#pragma once
#include "CoreMinimal.h"
#include "HealthEmptySignatureDelegate.generated.h"

class AActor;
class UYHealthComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHealthEmptySignature, UYHealthComponent*, healthComponent, AActor*, Instigator);

