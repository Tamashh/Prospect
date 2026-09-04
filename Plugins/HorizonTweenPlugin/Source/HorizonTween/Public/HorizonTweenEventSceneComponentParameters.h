#pragma once
#include "CoreMinimal.h"
#include "HorizonTweenEventParameters.h"
#include "HorizonTweenEventSceneComponentColorFromToParameters.h"
#include "HorizonTweenEventSceneComponentMoveFromToParameters.h"
#include "HorizonTweenEventSceneComponentRotatorFromToParameters.h"
#include "HorizonTweenEventSceneComponentScaleFromToParameters.h"
#include "HorizonTweenEventSceneComponentParameters.generated.h"

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventSceneComponentParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventParameters MoveFromToParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventSceneComponentMoveFromToParameters MoveFromToParamImpl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveFromTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventParameters RotatorFromToParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventSceneComponentRotatorFromToParameters RotatorFromToParamImpl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotateFromTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventParameters ScaleFromToParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventSceneComponentScaleFromToParameters ScaleFromToParamImpl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScaleFromTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventParameters ColorFromToParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventSceneComponentColorFromToParameters ColorFromToParamImpl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bColorFromTo;
    
    FHorizonTweenEventSceneComponentParameters();
};

