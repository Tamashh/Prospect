#pragma once
#include "CoreMinimal.h"
#include "HorizonTweenEventRotatorParameters.h"
#include "HorizonTweenEventActorRotatorFromToParameters.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventActorRotatorFromToParameters : public FHorizonTweenEventRotatorParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> TweenTargetWeakPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShortestPath;
    
    FHorizonTweenEventActorRotatorFromToParameters();
};

