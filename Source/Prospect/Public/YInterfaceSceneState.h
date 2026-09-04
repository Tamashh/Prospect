#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EYSceneState.h"
#include "YInterfaceSceneState.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UYInterfaceSceneState : public UInterface {
    GENERATED_BODY()
};

class IYInterfaceSceneState : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetState(EYSceneState State);
    
};

