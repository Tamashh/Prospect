#pragma once
#include "CoreMinimal.h"
#include "HorizonTweenEventFloatParameters.h"
#include "HorizonTweenEventWidgetRotatorFromToParameters.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventWidgetRotatorFromToParameters : public FHorizonTweenEventFloatParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWidget> TweenTargetWeakPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShortestPath;
    
    FHorizonTweenEventWidgetRotatorFromToParameters();
};

