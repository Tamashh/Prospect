#pragma once
#include "CoreMinimal.h"
#include "HorizonTweenEventRotatorParameters.h"
#include "HorizonTweenEventSceneComponentRotatorFromToParameters.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventSceneComponentRotatorFromToParameters : public FHorizonTweenEventRotatorParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> TweenTargetWeakPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShortestPath;
    
    FHorizonTweenEventSceneComponentRotatorFromToParameters();
};

