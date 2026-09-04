#pragma once
#include "CoreMinimal.h"
#include "YUserStatisticsEntry.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYUserStatisticsEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FYUserStatisticsEntry();
};

