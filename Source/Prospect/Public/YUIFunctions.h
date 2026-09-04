#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YUIFunctions.generated.h"

class UYWidget;

UCLASS(Blueprintable)
class UYUIFunctions : public UObject {
    GENERATED_BODY()
public:
    UYUIFunctions();

    UFUNCTION(BlueprintCallable)
    static void CloseWidget(UYWidget* Widget);
    
};

