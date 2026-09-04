#pragma once
#include "CoreMinimal.h"
#include "EYPlayerSupportResult.h"
#include "YPlayerReportResponseData.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerReportResponseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_reportedUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPlayerSupportResult m_result;
    
    PROSPECT_API FYPlayerReportResponseData();
};

