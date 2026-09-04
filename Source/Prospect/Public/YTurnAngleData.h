#pragma once
#include "CoreMinimal.h"
#include "YTurnAngleData.generated.h"

USTRUCT(BlueprintType)
struct FYTurnAngleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_angle;
    
    PROSPECT_API FYTurnAngleData();
};

