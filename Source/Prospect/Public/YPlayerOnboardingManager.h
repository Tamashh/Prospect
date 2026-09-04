#pragma once
#include "CoreMinimal.h"
#include "EYLoginResult.h"
#include "UObject/Object.h"
#include "YPlayerOnboardingManager.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYPlayerOnboardingManager : public UObject {
    GENERATED_BODY()
public:
    UYPlayerOnboardingManager();

    UFUNCTION(BlueprintCallable)
    void OnLoginResult(EYLoginResult loginResult);
    
};

