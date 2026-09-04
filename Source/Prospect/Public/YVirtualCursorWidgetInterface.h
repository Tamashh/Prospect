#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EYVirtualCursorState.h"
#include "YVirtualCursorWidgetInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UYVirtualCursorWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class IYVirtualCursorWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeState(EYVirtualCursorState State);
    
};

