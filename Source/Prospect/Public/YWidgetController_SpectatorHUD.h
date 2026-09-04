#pragma once
#include "CoreMinimal.h"
#include "YWidgetController.h"
#include "EYPlayerMatchFinishedResult.h"
#include "EYPlayerMatchState.h"
#include "YWidgetController_SpectatorHUD.generated.h"

class APlayerState;
class AYPlayerState;

UCLASS(Blueprintable)
class UYWidgetController_SpectatorHUD : public UYWidgetController {
    GENERATED_BODY()
public:
    UYWidgetController_SpectatorHUD();

    UFUNCTION(BlueprintCallable)
    void OnToggleDeathRecap();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateAvailable(APlayerState* State);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerMatchStateChanged(EYPlayerMatchState playerMatchState, AYPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnMatchResultChanged(EYPlayerMatchFinishedResult Result);
    
};

