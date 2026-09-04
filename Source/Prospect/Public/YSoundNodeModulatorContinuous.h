#pragma once
#include "CoreMinimal.h"
#include "Sound/SoundNode.h"
#include "YModulatorContinuousParams.h"
#include "YSoundNodeModulatorContinuous.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYSoundNodeModulatorContinuous : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYModulatorContinuousParams m_volumeModulationParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYModulatorContinuousParams m_pitchModulationParams;
    
    UYSoundNodeModulatorContinuous();

};

