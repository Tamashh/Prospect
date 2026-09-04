#pragma once
#include "CoreMinimal.h"
#include "YDebugAIStats.generated.h"

USTRUCT(BlueprintType)
struct FYDebugAIStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> m_aiCountPerType;
    
    PROSPECT_API FYDebugAIStats();
};

