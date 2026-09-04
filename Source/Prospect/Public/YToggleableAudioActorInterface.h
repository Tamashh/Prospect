#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "YToggleableAudioActorInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UYToggleableAudioActorInterface : public UInterface {
    GENERATED_BODY()
};

class IYToggleableAudioActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetIsEnabled(bool IsEnabled);
    
};

