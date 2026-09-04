#pragma once
#include "CoreMinimal.h"
#include "YUpdatePlayerStatisticsRequestClient.generated.h"

USTRUCT(BlueprintType)
struct FYUpdatePlayerStatisticsRequestClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString statisticToUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    PROSPECT_API FYUpdatePlayerStatisticsRequestClient();
};

