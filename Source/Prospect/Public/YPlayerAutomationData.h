#pragma once
#include "CoreMinimal.h"
#include "YAutomationLoadingMetrics.h"
#include "YPlayerAutomationData.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerAutomationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYAutomationLoadingMetrics m_loadingMetrics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_finishedInitialization;
    
    PROSPECT_API FYPlayerAutomationData();
};

