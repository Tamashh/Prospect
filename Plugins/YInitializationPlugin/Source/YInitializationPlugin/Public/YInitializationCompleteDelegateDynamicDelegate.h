#pragma once
#include "CoreMinimal.h"
#include "YRuntimeInitializationContext.h"
#include "YInitializationCompleteDelegateDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FYInitializationCompleteDelegateDynamic, const FYRuntimeInitializationContext&, Result);

