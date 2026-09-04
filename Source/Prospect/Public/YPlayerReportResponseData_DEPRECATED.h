#pragma once
#include "CoreMinimal.h"
#include "EYPlayerSupportResult.h"
#include "YPlayerReportResponseData_DEPRECATED.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerReportResponseData_DEPRECATED {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_response;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPlayerSupportResult m_result;
    
    PROSPECT_API FYPlayerReportResponseData_DEPRECATED();
};

