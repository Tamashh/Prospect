#pragma once
#include "CoreMinimal.h"
#include "YBiEventWrapper.h"
#include "YBiEventsWrapper.generated.h"

USTRUCT(BlueprintType)
struct FYBiEventsWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYBiEventWrapper> Messages;
    
    YGAMEANALYTICS_API FYBiEventsWrapper();
};

