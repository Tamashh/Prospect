#pragma once
#include "CoreMinimal.h"
#include "HorizonTweenEventLinearColorParameters.h"
#include "HorizonTweenEventActorColorFromToParameters.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventActorColorFromToParameters : public FHorizonTweenEventLinearColorParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> TweenTargetWeakPtr;
    
    FHorizonTweenEventActorColorFromToParameters();
};

