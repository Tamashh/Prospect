#pragma once
#include "CoreMinimal.h"
#include "YTransitionRequestData.h"
#include "YTransitionRuntimeData.generated.h"

USTRUCT(BlueprintType)
struct FYTransitionRuntimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTransitionRequestData m_initData;
    
    PROSPECT_API FYTransitionRuntimeData();
};

