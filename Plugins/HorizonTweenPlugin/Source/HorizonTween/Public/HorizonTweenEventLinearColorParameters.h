#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HorizonTweenEventCustomColorCurve.h"
#include "HorizonTweenEventTweenListImplementParameters.h"
#include "HorizonTweenEventLinearColorParameters.generated.h"

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventLinearColorParameters : public FHorizonTweenEventTweenListImplementParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> TweenStartList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> TweenEndList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSRGB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventCustomColorCurve CustomTweenCurve;
    
    FHorizonTweenEventLinearColorParameters();
};

