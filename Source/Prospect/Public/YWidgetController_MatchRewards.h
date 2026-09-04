#pragma once
#include "CoreMinimal.h"
#include "YWidgetController.h"
#include "YWidgetController_MatchRewards.generated.h"

UCLASS(Blueprintable)
class UYWidgetController_MatchRewards : public UYWidgetController {
    GENERATED_BODY()
public:
    UYWidgetController_MatchRewards();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateRewards();
    
    UFUNCTION(BlueprintCallable)
    static void InitializeScoringResults();
    
};

