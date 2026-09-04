#pragma once
#include "CoreMinimal.h"
#include "YStationPingEntry.h"
#include "YStationLoginUserEntry.generated.h"

USTRUCT(BlueprintType)
struct FYStationLoginUserEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYStationPingEntry> entries;
    
    BACKENDMODELS_API FYStationLoginUserEntry();
};

