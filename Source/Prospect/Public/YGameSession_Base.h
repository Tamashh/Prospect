#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "YGameSession_Base.generated.h"

UCLASS(Blueprintable)
class AYGameSession_Base : public AGameSession {
    GENERATED_BODY()
public:
    AYGameSession_Base(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnPostMatchDelayFinished();
    
};

