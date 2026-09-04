#pragma once
#include "CoreMinimal.h"
#include "HorizonTweenEventVectorParameters.h"
#include "HorizonTweenEventSceneComponentScaleFromToParameters.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventSceneComponentScaleFromToParameters : public FHorizonTweenEventVectorParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> TweenTargetWeakPtr;
    
    FHorizonTweenEventSceneComponentScaleFromToParameters();
};

