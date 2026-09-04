#pragma once
#include "CoreMinimal.h"
#include "HorizonTweenEventLinearColorParameters.h"
#include "HorizonTweenEventSceneComponentColorFromToParameters.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventSceneComponentColorFromToParameters : public FHorizonTweenEventLinearColorParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> TweenTargetWeakPtr;
    
    FHorizonTweenEventSceneComponentColorFromToParameters();
};

