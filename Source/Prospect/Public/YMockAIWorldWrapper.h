#pragma once
#include "CoreMinimal.h"
#include "YMockAIWorldWrapper.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FYMockAIWorldWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorld* m_world;
    
    PROSPECT_API FYMockAIWorldWrapper();
};

