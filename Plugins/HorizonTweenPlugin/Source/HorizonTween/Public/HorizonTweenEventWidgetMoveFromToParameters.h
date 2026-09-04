#pragma once
#include "CoreMinimal.h"
#include "HorizonTweenEventWidgetVector2DParameters.h"
#include "HorizonTweenEventWidgetMoveFromToParameters.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventWidgetMoveFromToParameters : public FHorizonTweenEventWidgetVector2DParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWidget> TweenTargetWeakPtr;
    
    FHorizonTweenEventWidgetMoveFromToParameters();
};

