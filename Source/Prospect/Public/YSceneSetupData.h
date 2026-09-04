#pragma once
#include "CoreMinimal.h"
#include "YSceneSetupData.generated.h"

class AActor;
class ACameraActor;

USTRUCT(BlueprintType)
struct FYSceneSetupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* m_detailCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* m_cameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_customizationPlacementLocation;
    
    PROSPECT_API FYSceneSetupData();
};

