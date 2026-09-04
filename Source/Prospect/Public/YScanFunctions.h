#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YScanParameters.h"
#include "YScanFunctions.generated.h"

class UYScannableComponent;

UCLASS(Blueprintable)
class PROSPECT_API UYScanFunctions : public UObject {
    GENERATED_BODY()
public:
    UYScanFunctions();

private:
    UFUNCTION(BlueprintCallable)
    static TArray<UYScannableComponent*> Scan(const FYScanParameters& scanParameters);
    
};

