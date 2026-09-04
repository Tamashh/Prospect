#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "YEndOfMatchLevelScriptActor.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class AYEndOfMatchLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
    AYEndOfMatchLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowEOM(APlayerController* PlayerController);
    
};

