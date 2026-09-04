#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EYVolumeBusType.h"
#include "YAudioVolumeHelperFunctions.generated.h"

UCLASS(Blueprintable)
class UYAudioVolumeHelperFunctions : public UObject {
    GENERATED_BODY()
public:
    UYAudioVolumeHelperFunctions();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetVolume(float Value, EYVolumeBusType volumeType);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static float GetVolume(EYVolumeBusType volumeType);
    
};

