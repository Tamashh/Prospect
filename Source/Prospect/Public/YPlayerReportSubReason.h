#pragma once
#include "CoreMinimal.h"
#include "EYReportRequirement.h"
#include "YPlayerReportSubReason.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerReportSubReason {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_reportSubReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_disabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYReportRequirement m_body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_reportSubReasonLocalization;
    
    PROSPECT_API FYPlayerReportSubReason();
};

