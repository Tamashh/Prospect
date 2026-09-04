#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YReconnectFunctions.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYReconnectFunctions : public UObject {
    GENERATED_BODY()
public:
    UYReconnectFunctions();

    UFUNCTION(BlueprintCallable)
    static bool IsPlayerReconnecting(UObject* playerContextObject);
    
};

