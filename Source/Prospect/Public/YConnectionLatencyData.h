#pragma once
#include "CoreMinimal.h"
#include "YConnectionLatencyData.generated.h"

USTRUCT(BlueprintType)
struct FYConnectionLatencyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_totalSamplesNetSaturated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_ue4ExactPing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_latencySamples;
    
    PROSPECT_API FYConnectionLatencyData();
};

