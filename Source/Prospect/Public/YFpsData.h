#pragma once
#include "CoreMinimal.h"
#include "YFpsData.generated.h"

USTRUCT(BlueprintType)
struct FYFpsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fps;
    
    PROSPECT_API FYFpsData();
};

