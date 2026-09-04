#pragma once
#include "CoreMinimal.h"
#include "YGetPlayerStatisticsRequest.generated.h"

USTRUCT(BlueprintType)
struct FYGetPlayerStatisticsRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Statistics;
    
    YAZUREFUNCTIONSUTILS_API FYGetPlayerStatisticsRequest();
};

