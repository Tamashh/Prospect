#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "YSharedUtils.generated.h"

class AActor;

UCLASS(Blueprintable)
class PROSPECT_API UYSharedUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYSharedUtils();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRunningOnPlayerComputer(const AActor* Owner);
    
};

