#pragma once
#include "CoreMinimal.h"
#include "YServerReport.h"
#include "YServerReportResult.generated.h"

USTRUCT(BlueprintType)
struct FYServerReportResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYServerReport serverData;
    
    BACKENDMODELS_API FYServerReportResult();
};

