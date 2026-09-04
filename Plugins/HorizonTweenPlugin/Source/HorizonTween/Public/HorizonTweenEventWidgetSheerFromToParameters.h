#pragma once
#include "CoreMinimal.h"
#include "HorizonTweenEventWidgetVector2DParameters.h"
#include "HorizonTweenEventWidgetSheerFromToParameters.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventWidgetSheerFromToParameters : public FHorizonTweenEventWidgetVector2DParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWidget> TweenTargetWeakPtr;
    
    FHorizonTweenEventWidgetSheerFromToParameters();
};

