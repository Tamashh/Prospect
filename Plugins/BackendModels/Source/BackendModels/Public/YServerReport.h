#pragma once
#include "CoreMinimal.h"
#include "YStationInfoProto.h"
#include "YServerReport.generated.h"

USTRUCT(BlueprintType)
struct FYServerReport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYStationInfoProto> infos;
    
    BACKENDMODELS_API FYServerReport();
};

