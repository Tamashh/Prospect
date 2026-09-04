#pragma once
#include "CoreMinimal.h"
#include "OnAimTargetChangedSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAimTargetChangedSignature, AActor*, TargetActor);

