#pragma once
#include "CoreMinimal.h"
#include "EYPlayerStateBlueprint.h"
#include "EYStateCancelationBehavior.h"
#include "YCameraTransitionData.generated.h"

USTRUCT(BlueprintType)
struct FYCameraTransitionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPlayerStateBlueprint m_playerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYStateCancelationBehavior m_stateCancelBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_transitionTowardsFirstPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_clearTranslationOffsetOnCompletion;
    
    PROSPECT_API FYCameraTransitionData();
};

