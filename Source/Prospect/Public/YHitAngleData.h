#pragma once
#include "CoreMinimal.h"
#include "YHitAngleData.generated.h"

USTRUCT(BlueprintType)
struct FYHitAngleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_dotValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isRight;
    
    PROSPECT_API FYHitAngleData();
};

