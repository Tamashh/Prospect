#pragma once
#include "CoreMinimal.h"
#include "HorizonTweenEventImplementParameters.h"
#include "HorizonTweenEventTweenListImplementParameters.generated.h"

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventTweenListImplementParameters : public FHorizonTweenEventImplementParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoopTweenList;
    
    FHorizonTweenEventTweenListImplementParameters();
};

