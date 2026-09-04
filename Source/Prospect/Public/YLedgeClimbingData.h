#pragma once
#include "CoreMinimal.h"
#include "EYClimbingStateInternal.h"
#include "EYMoveType.h"
#include "EYObstacleType.h"
#include "YLedgeClimbingData.generated.h"

USTRUCT(BlueprintType)
struct FYLedgeClimbingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isClimbing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_normalizedAlpha_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_normalizedAlpha_02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_normalizedAlpha_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYClimbingStateInternal m_climbingStateInternal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYMoveType m_moveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYObstacleType m_obstacleType;
    
    PROSPECT_API FYLedgeClimbingData();
};

