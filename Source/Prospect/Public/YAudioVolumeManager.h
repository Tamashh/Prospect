#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YAudioVolumeManager.generated.h"

UCLASS(Blueprintable, Config=Audio)
class UYAudioVolumeManager : public UObject {
    GENERATED_BODY()
public:
    UYAudioVolumeManager();

};

