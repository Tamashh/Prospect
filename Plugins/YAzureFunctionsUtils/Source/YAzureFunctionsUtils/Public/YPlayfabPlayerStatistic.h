#pragma once
#include "CoreMinimal.h"
#include "YPlayfabPlayerStatistic.generated.h"

USTRUCT(BlueprintType)
struct FYPlayfabPlayerStatistic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatisticName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    YAZUREFUNCTIONSUTILS_API FYPlayfabPlayerStatistic();
};

