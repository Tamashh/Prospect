#pragma once
#include "CoreMinimal.h"
#include "YSessionResourceUserEntry.h"
#include "YResourceSessionRequestData.generated.h"

USTRUCT(BlueprintType)
struct FYResourceSessionRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYSessionResourceUserEntry m_sessionUserEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_clearResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_forceRefreshEvaluateState;
    
    PROSPECT_API FYResourceSessionRequestData();
};

