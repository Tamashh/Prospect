#pragma once
#include "CoreMinimal.h"
#include "YHighlightCallbackEventDelegate.h"
#include "YWrapperCallbackHighlightData.generated.h"

USTRUCT(BlueprintType)
struct FYWrapperCallbackHighlightData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<FYHighlightCallbackEvent> m_delegates;
    
    PROSPECT_API FYWrapperCallbackHighlightData();
};

