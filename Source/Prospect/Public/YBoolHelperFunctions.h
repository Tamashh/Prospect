#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YBoolHelperFunctions.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYBoolHelperFunctions : public UObject {
    GENERATED_BODY()
public:
    UYBoolHelperFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBoolAsStringWithColor(bool Value);
    
};

