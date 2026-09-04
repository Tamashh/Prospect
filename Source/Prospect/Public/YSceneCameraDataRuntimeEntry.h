#pragma once
#include "CoreMinimal.h"
#include "EYSceneState.h"
#include "YSceneCameraDataRuntimeEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FYSceneCameraDataRuntimeEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_cameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYSceneState m_sceneState;
    
    PROSPECT_API FYSceneCameraDataRuntimeEntry();
};

