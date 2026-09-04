#pragma once
#include "CoreMinimal.h"
#include "HorizonTweenEventSplinePathParameters.h"
#include "HorizonTweenEventActorMoveSplinePathParameters.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventActorMoveSplinePathParameters : public FHorizonTweenEventSplinePathParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> TweenTargetWeakPtr;
    
    FHorizonTweenEventActorMoveSplinePathParameters();
};

