#pragma once
#include "CoreMinimal.h"
#include "HorizonTweenEventVectorParameters.h"
#include "HorizonTweenEventActorScaleFromToParameters.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventActorScaleFromToParameters : public FHorizonTweenEventVectorParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> TweenTargetWeakPtr;
    
    FHorizonTweenEventActorScaleFromToParameters();
};

