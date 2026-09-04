#pragma once
#include "CoreMinimal.h"
#include "EYPlayerStateBlueprint.h"
#include "YAudioEffectZoneMovementStateData.generated.h"

USTRUCT(BlueprintType)
struct FYAudioEffectZoneMovementStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPlayerStateBlueprint m_targetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_targetWalkStateValue;
    
    PROSPECT_API FYAudioEffectZoneMovementStateData();
};

