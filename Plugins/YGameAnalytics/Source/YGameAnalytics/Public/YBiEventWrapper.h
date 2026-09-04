#pragma once
#include "CoreMinimal.h"
#include "YBiEventWrapper.generated.h"

USTRUCT(BlueprintType)
struct FYBiEventWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString messageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString eventData;
    
    YGAMEANALYTICS_API FYBiEventWrapper();
};

