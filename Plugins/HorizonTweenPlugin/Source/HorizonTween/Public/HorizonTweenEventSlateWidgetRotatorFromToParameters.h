#pragma once
#include "CoreMinimal.h"
#include "HorizonTweenEventFloatParameters.h"
#include "HorizonTweenEventSlateWidgetRotatorFromToParameters.generated.h"

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventSlateWidgetRotatorFromToParameters : public FHorizonTweenEventFloatParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShortestPath;
    
    FHorizonTweenEventSlateWidgetRotatorFromToParameters();
};

