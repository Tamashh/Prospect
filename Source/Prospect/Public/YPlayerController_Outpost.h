#pragma once
#include "CoreMinimal.h"
#include "EYLoginResult.h"
#include "YPlayerController.h"
#include "YPlayerController_Outpost.generated.h"

UCLASS(Blueprintable)
class AYPlayerController_Outpost : public AYPlayerController {
    GENERATED_BODY()
public:
    AYPlayerController_Outpost(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnLoginResponse(EYLoginResult Result);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void FetchOffers();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnableGameMode(const FName& GameModeName, bool isRanked, bool IsEnabled, bool isAlwaysVisible, bool isTournamentMode) const;
    
};

