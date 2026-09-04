#pragma once
#include "CoreMinimal.h"
#include "HorizonTweenEventParameters.h"
#include "HorizonTweenEventWidgetColorFromToParameters.h"
#include "HorizonTweenEventWidgetMoveFromToParameters.h"
#include "HorizonTweenEventWidgetRotatorFromToParameters.h"
#include "HorizonTweenEventWidgetScaleFromToParameters.h"
#include "HorizonTweenEventWidgetSheerFromToParameters.h"
#include "HorizonTweenEventWidgetParameters.generated.h"

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventWidgetParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventParameters MoveFromToParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventWidgetMoveFromToParameters MoveFromToParamImpl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveFromTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventParameters RotatorFromToParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventWidgetRotatorFromToParameters RotatorFromToParamImpl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotateFromTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventParameters ScaleFromToParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventWidgetScaleFromToParameters ScaleFromToParamImpl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScaleFromTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventParameters SheerFromToParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventWidgetSheerFromToParameters SheerFromToParamImpl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSheerFromTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventParameters ColorFromToParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventWidgetColorFromToParameters ColorFromToParamImpl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bColorFromTo;
    
    FHorizonTweenEventWidgetParameters();
};

