#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "YCameraActor.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API AYCameraActor : public ACameraActor {
    GENERATED_BODY()
public:
    AYCameraActor(const FObjectInitializer& ObjectInitializer);

};

