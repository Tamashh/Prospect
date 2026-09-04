#pragma once
#include "CoreMinimal.h"
#include "ScreenWidgetLoadedSignatureDelegate.generated.h"

class UYWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FScreenWidgetLoadedSignature, UYWidget*, widgetInstance);

