#pragma once
#include "CoreMinimal.h"
#include "YLiveEventModifier.generated.h"

USTRUCT(BlueprintType)
struct FYLiveEventModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    BACKENDMODELS_API FYLiveEventModifier();
};

