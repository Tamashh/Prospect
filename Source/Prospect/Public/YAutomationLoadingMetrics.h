#pragma once
#include "CoreMinimal.h"
#include "YAutomationLoadingMetrics.generated.h"

USTRUCT(BlueprintType)
struct FYAutomationLoadingMetrics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> m_timesLoadedMap;
    
    PROSPECT_API FYAutomationLoadingMetrics();
};

