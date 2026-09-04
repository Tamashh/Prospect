#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YMarketingManager.generated.h"

class UYMarketingManager;

UCLASS(Blueprintable)
class UYMarketingManager : public UObject {
    GENERATED_BODY()
public:
    UYMarketingManager();

    UFUNCTION(BlueprintCallable)
    static UYMarketingManager* GetMarketingManager(const UObject* objectContext);
    
};

