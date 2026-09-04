#pragma once
#include "CoreMinimal.h"
#include "HorizonTweenEventActorColorFromToParameters.h"
#include "HorizonTweenEventActorMoveFromToParameters.h"
#include "HorizonTweenEventActorRotatorFromToParameters.h"
#include "HorizonTweenEventActorScaleFromToParameters.h"
#include "HorizonTweenEventParameters.h"
#include "HorizonTweenEventActorParameters.generated.h"

USTRUCT(BlueprintType)
struct HORIZONTWEEN_API FHorizonTweenEventActorParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventParameters MoveFromToParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventActorMoveFromToParameters MoveFromToParamImpl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveFromTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventParameters RotatorFromToParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventActorRotatorFromToParameters RotatorFromToParamImpl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotateFromTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventParameters ScaleFromToParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventActorScaleFromToParameters ScaleFromToParamImpl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScaleFromTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventParameters ColorFromToParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHorizonTweenEventActorColorFromToParameters ColorFromToParamImpl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bColorFromTo;
    
    FHorizonTweenEventActorParameters();
};

