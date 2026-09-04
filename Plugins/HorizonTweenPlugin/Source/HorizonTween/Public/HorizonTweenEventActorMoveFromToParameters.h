#pragma once
#include "CoreMinimal.h"
#include "HorizonTweenEventVectorParameters.h"
#include "HorizonTweenEventActorMoveFromToParameters.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventActorMoveFromToParameters : public FHorizonTweenEventVectorParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> TweenTargetWeakPtr;
    
    FHorizonTweenEventActorMoveFromToParameters();
};

