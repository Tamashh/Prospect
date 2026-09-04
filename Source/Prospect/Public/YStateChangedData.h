#pragma once
#include "CoreMinimal.h"
#include "YStateChangedData.generated.h"

USTRUCT(BlueprintType)
struct FYStateChangedData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 m_state;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 m_eventCounter;
    
    PROSPECT_API FYStateChangedData();
};

