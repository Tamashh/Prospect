#pragma once
#include "CoreMinimal.h"
#include "EYPlayerMatchFinishedResult.h"
#include "YMatchFinishedInfo.generated.h"

USTRUCT(BlueprintType)
struct FYMatchFinishedInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPlayerMatchFinishedResult m_result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_context;
    
    PROSPECT_API FYMatchFinishedInfo();
};

