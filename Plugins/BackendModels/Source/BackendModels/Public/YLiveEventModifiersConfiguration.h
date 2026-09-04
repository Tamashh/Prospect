#pragma once
#include "CoreMinimal.h"
#include "YLiveEventModifier.h"
#include "YLiveEventModifiersConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FYLiveEventModifiersConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYLiveEventModifier> liveEventModifiers;
    
    BACKENDMODELS_API FYLiveEventModifiersConfiguration();
};

