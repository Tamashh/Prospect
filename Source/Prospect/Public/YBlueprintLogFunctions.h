#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EYLogCategory.h"
#include "EYLogObjectContext.h"
#include "EYLogVerbosity.h"
#include "YBlueprintLogFunctions.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYBlueprintLogFunctions : public UObject {
    GENERATED_BODY()
public:
    UYBlueprintLogFunctions();

    UFUNCTION(BlueprintCallable)
    static void LogString(UObject* optionalContextObject, const FString& String, EYLogCategory logCategory, EYLogVerbosity Verbosity, EYLogObjectContext logObjectContext);
    
};

