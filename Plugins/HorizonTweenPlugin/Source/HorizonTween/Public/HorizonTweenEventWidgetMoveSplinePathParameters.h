#pragma once
#include "CoreMinimal.h"
#include "HorizonTweenEventSplinePathParameters.h"
#include "HorizonTweenEventWidgetMoveSplinePathParameters.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventWidgetMoveSplinePathParameters : public FHorizonTweenEventSplinePathParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWidget> TweenTargetWeakPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTweenSheer;
    
    FHorizonTweenEventWidgetMoveSplinePathParameters();
};

