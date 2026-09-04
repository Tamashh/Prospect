#pragma once
#include "CoreMinimal.h"
#include "HorizonTweenEventVectorParameters.h"
#include "HorizonTweenEventSceneComponentMoveFromToParameters.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventSceneComponentMoveFromToParameters : public FHorizonTweenEventVectorParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> TweenTargetWeakPtr;
    
    FHorizonTweenEventSceneComponentMoveFromToParameters();
};

