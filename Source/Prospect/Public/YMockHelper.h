#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YMockHelper.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYMockHelper : public UObject {
    GENERATED_BODY()
public:
    UYMockHelper();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsMockWorld(UObject* WorldContext);
    
};

