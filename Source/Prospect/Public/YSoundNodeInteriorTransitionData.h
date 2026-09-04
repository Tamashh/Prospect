#pragma once
#include "CoreMinimal.h"
#include "YSoundNodeInteriorTransitionData.generated.h"

USTRUCT(BlueprintType)
struct FYSoundNodeInteriorTransitionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_wasInInterior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_currentInteriorTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_transitioningTowardsInterior;
    
    PROSPECT_API FYSoundNodeInteriorTransitionData();
};

