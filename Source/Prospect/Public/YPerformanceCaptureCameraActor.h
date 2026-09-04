#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "YPerformanceCaptureCameraActor.generated.h"

UCLASS(Blueprintable)
class AYPerformanceCaptureCameraActor : public ACameraActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_capturePointName;
    
    AYPerformanceCaptureCameraActor(const FObjectInitializer& ObjectInitializer);

};

