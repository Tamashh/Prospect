#pragma once
#include "CoreMinimal.h"
#include "HorizonTweenEventSplinePathParameters.h"
#include "HorizonTweenEventSceneComponentMoveSplinePathParameters.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventSceneComponentMoveSplinePathParameters : public FHorizonTweenEventSplinePathParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> TweenTargetWeakPtr;
    
    FHorizonTweenEventSceneComponentMoveSplinePathParameters();
};

