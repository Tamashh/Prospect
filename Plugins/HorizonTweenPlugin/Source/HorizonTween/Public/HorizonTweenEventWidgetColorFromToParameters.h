#pragma once
#include "CoreMinimal.h"
#include "HorizonTweenEventLinearColorParameters.h"
#include "HorizonTweenEventWidgetColorFromToParameters.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventWidgetColorFromToParameters : public FHorizonTweenEventLinearColorParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWidget> TweenTargetWeakPtr;
    
    FHorizonTweenEventWidgetColorFromToParameters();
};

