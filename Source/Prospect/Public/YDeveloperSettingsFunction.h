#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YDeveloperSettingsFunction.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYDeveloperSettingsFunction : public UObject {
    GENERATED_BODY()
public:
    UYDeveloperSettingsFunction();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldRepeatCompletedDynamicOnboardingMissions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBackgroundDropPodEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTutorialStartStep();
    
};

