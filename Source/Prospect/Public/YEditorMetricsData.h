#pragma once
#include "CoreMinimal.h"
#include "YEditorMetricsData.generated.h"

USTRUCT(BlueprintType)
struct FYEditorMetricsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> metricsNumericData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> metricsStringData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, bool> metricsBoolData;
    
    PROSPECT_API FYEditorMetricsData();
};

