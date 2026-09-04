#pragma once
#include "CoreMinimal.h"
#include "YWidgetController.h"
#include "EYPlayerMatchFinishedResult.h"
#include "YWidgetController_MatchHUD.generated.h"

class APlayerState;

UCLASS(Blueprintable)
class UYWidgetController_MatchHUD : public UYWidgetController {
    GENERATED_BODY()
public:
    UYWidgetController_MatchHUD();

private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateAvailable(APlayerState* State);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerMatchFinishedResultChanged(EYPlayerMatchFinishedResult Result);
    
};

