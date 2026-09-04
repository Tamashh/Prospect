#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "HorizonTweenEventActorColorFromToParameters.h"
#include "HorizonTweenEventActorMoveFromToParameters.h"
#include "HorizonTweenEventActorMoveSplinePathParameters.h"
#include "HorizonTweenEventActorRotatorFromToParameters.h"
#include "HorizonTweenEventActorScaleFromToParameters.h"
#include "HorizonTweenEventFloatParameters.h"
#include "HorizonTweenEventLinearColorParameters.h"
#include "HorizonTweenEventParameters.h"
#include "HorizonTweenEventRotatorParameters.h"
#include "HorizonTweenEventSceneComponentColorFromToParameters.h"
#include "HorizonTweenEventSceneComponentMoveFromToParameters.h"
#include "HorizonTweenEventSceneComponentMoveSplinePathParameters.h"
#include "HorizonTweenEventSceneComponentRotatorFromToParameters.h"
#include "HorizonTweenEventSceneComponentScaleFromToParameters.h"
#include "HorizonTweenEventSplinePathParameters.h"
#include "HorizonTweenEventVectorParameters.h"
#include "HorizonTweenEventWidgetColorFromToParameters.h"
#include "HorizonTweenEventWidgetMoveFromToParameters.h"
#include "HorizonTweenEventWidgetMoveSplinePathParameters.h"
#include "HorizonTweenEventWidgetRotatorFromToParameters.h"
#include "HorizonTweenEventWidgetScaleFromToParameters.h"
#include "HorizonTweenEventWidgetSheerFromToParameters.h"
#include "HorizonTweenEventWidgetVector2DParameters.h"
#include "HorizonTweenSystemProxy.generated.h"

class AActor;
class AHorizonTweenSystem;
class UHorizonTweenActorColorFromToEvent;
class UHorizonTweenActorMoveFromToEvent;
class UHorizonTweenActorMoveSplinePathEvent;
class UHorizonTweenActorRotatorFromToEvent;
class UHorizonTweenActorScaleFromToEvent;
class UHorizonTweenEvent;
class UHorizonTweenFloatEvent;
class UHorizonTweenLinearColorEvent;
class UHorizonTweenRotatorEvent;
class UHorizonTweenSceneComponentColorFromToEvent;
class UHorizonTweenSceneComponentMoveFromToEvent;
class UHorizonTweenSceneComponentMoveSplinePathEvent;
class UHorizonTweenSceneComponentRotatorFromToEvent;
class UHorizonTweenSceneComponentScaleFromToEvent;
class UHorizonTweenSplinePathEvent;
class UHorizonTweenVector2DEvent;
class UHorizonTweenVectorEvent;
class UHorizonTweenWidgetColorFromToEvent;
class UHorizonTweenWidgetMoveFromToEvent;
class UHorizonTweenWidgetMoveSplinePathEvent;
class UHorizonTweenWidgetRotatorFromToEvent;
class UHorizonTweenWidgetScaleFromToEvent;
class UHorizonTweenWidgetSheerFromToEvent;
class UObject;
class USceneComponent;
class USplineComponent;
class UWidget;

UCLASS(Blueprintable, MinimalAPI)
class UHorizonTweenSystemProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UHorizonTweenSystemProxy();

    UFUNCTION(BlueprintCallable)
    static UHorizonTweenWidgetSheerFromToEvent* CreateTweenWidgetSheerFromToEventWithParam(AHorizonTweenSystem* TweenSystem, UWidget* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetSheerFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenWidgetSheerFromToEvent* CreateTweenWidgetSheerFromToEvent(AHorizonTweenSystem* TweenSystem, UWidget* pTarget, FVector2D TweenFrom, FVector2D TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetSheerFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenWidgetScaleFromToEvent* CreateTweenWidgetScaleFromToEventWithParam(AHorizonTweenSystem* TweenSystem, UWidget* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetScaleFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenWidgetScaleFromToEvent* CreateTweenWidgetScaleFromToEvent(AHorizonTweenSystem* TweenSystem, UWidget* pTarget, FVector2D TweenFrom, FVector2D TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetScaleFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenWidgetRotatorFromToEvent* CreateTweenWidgetRotatorFromToEventWithParam(AHorizonTweenSystem* TweenSystem, UWidget* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetRotatorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenWidgetRotatorFromToEvent* CreateTweenWidgetRotatorFromToEvent(AHorizonTweenSystem* TweenSystem, UWidget* pTarget, float TweenFrom, float TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetRotatorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenWidgetMoveSplinePathEvent* CreateTweenWidgetMoveSplinePathEventWithSplineComponentAndParam(AHorizonTweenSystem* TweenSystem, UWidget* pTarget, USplineComponent* pSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenWidgetMoveSplinePathEvent* CreateTweenWidgetMoveSplinePathEventWithSplineActorAndParam(AHorizonTweenSystem* TweenSystem, UWidget* pTarget, AActor* pWidgetWithSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenWidgetMoveSplinePathEvent* CreateTweenWidgetMoveSplinePathEventWithParam(AHorizonTweenSystem* TweenSystem, UWidget* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenWidgetMoveFromToEvent* CreateTweenWidgetMoveFromToEventWithParam(AHorizonTweenSystem* TweenSystem, UWidget* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetMoveFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenWidgetMoveFromToEvent* CreateTweenWidgetMoveFromToEvent(AHorizonTweenSystem* TweenSystem, UWidget* pTarget, FVector2D TweenFrom, FVector2D TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetMoveFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenWidgetColorFromToEvent* CreateTweenWidgetColorFromToEventWithParam(AHorizonTweenSystem* TweenSystem, UWidget* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetColorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenWidgetColorFromToEvent* CreateTweenWidgetColorFromToEvent(AHorizonTweenSystem* TweenSystem, UWidget* pTarget, FLinearColor TweenFrom, FLinearColor TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetColorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenVectorEvent* CreateTweenVectorEventWithParam(AHorizonTweenSystem* TweenSystem, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventVectorParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenVectorEvent* CreateTweenVectorEvent(AHorizonTweenSystem* TweenSystem, FVector TweenFrom, FVector TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventVectorParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenVector2DEvent* CreateTweenVector2DEventWithParam(AHorizonTweenSystem* TweenSystem, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetVector2DParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenVector2DEvent* CreateTweenVector2DEvent(AHorizonTweenSystem* TweenSystem, FVector2D TweenFrom, FVector2D TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetVector2DParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenSplinePathEvent* CreateTweenSplinePathEventWithParamWithSplineComponentAndParam(AHorizonTweenSystem* TweenSystem, USplineComponent* pSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenSplinePathEvent* CreateTweenSplinePathEventWithParamWithSplineActorAndParam(AHorizonTweenSystem* TweenSystem, AActor* pActorWithSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenSplinePathEvent* CreateTweenSplinePathEventWithParam(AHorizonTweenSystem* TweenSystem, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenSceneComponentScaleFromToEvent* CreateTweenSceneComponentScaleFromToEventWithParam(AHorizonTweenSystem* TweenSystem, USceneComponent* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentScaleFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenSceneComponentScaleFromToEvent* CreateTweenSceneComponentScaleFromToEvent(AHorizonTweenSystem* TweenSystem, USceneComponent* pTarget, FVector TweenFrom, FVector TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentScaleFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenSceneComponentRotatorFromToEvent* CreateTweenSceneComponentRotatorFromToEventWithParam(AHorizonTweenSystem* TweenSystem, USceneComponent* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentRotatorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenSceneComponentRotatorFromToEvent* CreateTweenSceneComponentRotatorFromToEvent(AHorizonTweenSystem* TweenSystem, USceneComponent* pTarget, FRotator TweenFrom, FRotator TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentRotatorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenSceneComponentMoveSplinePathEvent* CreateTweenSceneComponentMoveSplinePathEventWithSplineComponentAndParam(AHorizonTweenSystem* TweenSystem, USceneComponent* pTarget, USplineComponent* pSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenSceneComponentMoveSplinePathEvent* CreateTweenSceneComponentMoveSplinePathEventWithSplineActorAndParam(AHorizonTweenSystem* TweenSystem, USceneComponent* pTarget, AActor* pActorWithSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenSceneComponentMoveSplinePathEvent* CreateTweenSceneComponentMoveSplinePathEventWithParam(AHorizonTweenSystem* TweenSystem, USceneComponent* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenSceneComponentMoveFromToEvent* CreateTweenSceneComponentMoveFromToEventWithParam(AHorizonTweenSystem* TweenSystem, USceneComponent* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentMoveFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenSceneComponentMoveFromToEvent* CreateTweenSceneComponentMoveFromToEvent(AHorizonTweenSystem* TweenSystem, USceneComponent* pTarget, FVector TweenFrom, FVector TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentMoveFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenSceneComponentColorFromToEvent* CreateTweenSceneComponentColorFromToEventWithParam(AHorizonTweenSystem* TweenSystem, USceneComponent* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentColorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenSceneComponentColorFromToEvent* CreateTweenSceneComponentColorFromToEvent(AHorizonTweenSystem* TweenSystem, USceneComponent* pTarget, FLinearColor TweenFrom, FLinearColor TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentColorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenRotatorEvent* CreateTweenRotatorEventWithParam(AHorizonTweenSystem* TweenSystem, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventRotatorParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenRotatorEvent* CreateTweenRotatorEvent(AHorizonTweenSystem* TweenSystem, FRotator TweenFrom, FRotator TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventRotatorParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenLinearColorEvent* CreateTweenLinearColorEventWithParam(AHorizonTweenSystem* TweenSystem, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventLinearColorParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenLinearColorEvent* CreateTweenLinearColorEvent(AHorizonTweenSystem* TweenSystem, FLinearColor TweenFrom, FLinearColor TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventLinearColorParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenFloatEvent* CreateTweenFloatEventWithParam(AHorizonTweenSystem* TweenSystem, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventFloatParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenFloatEvent* CreateTweenFloatEvent(AHorizonTweenSystem* TweenSystem, float TweenFrom, float TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventFloatParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenEvent* CreateTweenEventWithParameter(AHorizonTweenSystem* TweenSystem, const FHorizonTweenEventParameters& Param);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenActorScaleFromToEvent* CreateTweenActorScaleFromToEventWithParam(AHorizonTweenSystem* TweenSystem, AActor* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorScaleFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenActorScaleFromToEvent* CreateTweenActorScaleFromToEvent(AHorizonTweenSystem* TweenSystem, AActor* pTarget, FVector TweenFrom, FVector TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorScaleFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenActorRotatorFromToEvent* CreateTweenActorRotatorFromToEventWithParam(AHorizonTweenSystem* TweenSystem, AActor* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorRotatorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenActorRotatorFromToEvent* CreateTweenActorRotatorFromToEvent(AHorizonTweenSystem* TweenSystem, AActor* pTarget, FRotator TweenFrom, FRotator TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorRotatorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenActorMoveSplinePathEvent* CreateTweenActorMoveSplinePathEventWithSplineComponentAndParam(AHorizonTweenSystem* TweenSystem, AActor* pTarget, USplineComponent* pSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenActorMoveSplinePathEvent* CreateTweenActorMoveSplinePathEventWithSplineActorAndParam(AHorizonTweenSystem* TweenSystem, AActor* pTarget, AActor* pActorWithSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenActorMoveSplinePathEvent* CreateTweenActorMoveSplinePathEventWithParam(AHorizonTweenSystem* TweenSystem, AActor* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenActorMoveFromToEvent* CreateTweenActorMoveFromToEventWithParam(AHorizonTweenSystem* TweenSystem, AActor* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorMoveFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenActorMoveFromToEvent* CreateTweenActorMoveFromToEvent(AHorizonTweenSystem* TweenSystem, AActor* pTarget, FVector TweenFrom, FVector TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorMoveFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenActorColorFromToEvent* CreateTweenActorColorFromToEventWithParam(AHorizonTweenSystem* TweenSystem, AActor* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorColorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonTweenActorColorFromToEvent* CreateTweenActorColorFromToEvent(AHorizonTweenSystem* TweenSystem, AActor* pTarget, FLinearColor TweenFrom, FLinearColor TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorColorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenWidgetSheerFromToEvent* CreateDefaultTweenWidgetSheerFromToEventWithParam(UObject* WorldContextObject, UWidget* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetSheerFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenWidgetSheerFromToEvent* CreateDefaultTweenWidgetSheerFromToEvent(UObject* WorldContextObject, UWidget* pTarget, FVector2D TweenFrom, FVector2D TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetSheerFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenWidgetScaleFromToEvent* CreateDefaultTweenWidgetScaleFromToEventWithParam(UObject* WorldContextObject, UWidget* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetScaleFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenWidgetScaleFromToEvent* CreateDefaultTweenWidgetScaleFromToEvent(UObject* WorldContextObject, UWidget* pTarget, FVector2D TweenFrom, FVector2D TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetScaleFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenWidgetRotatorFromToEvent* CreateDefaultTweenWidgetRotatorFromToEventWithParam(UObject* WorldContextObject, UWidget* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetRotatorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenWidgetRotatorFromToEvent* CreateDefaultTweenWidgetRotatorFromToEvent(UObject* WorldContextObject, UWidget* pTarget, float TweenFrom, float TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetRotatorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenWidgetMoveSplinePathEvent* CreateDefaultTweenWidgetMoveSplinePathEventWithSplineComponentAndParam(UObject* WorldContextObject, UWidget* pTarget, USplineComponent* pSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenWidgetMoveSplinePathEvent* CreateDefaultTweenWidgetMoveSplinePathEventWithSplineActorAndParam(UObject* WorldContextObject, UWidget* pTarget, AActor* pWidgetWithSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenWidgetMoveSplinePathEvent* CreateDefaultTweenWidgetMoveSplinePathEventWithParam(UObject* WorldContextObject, UWidget* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenWidgetMoveFromToEvent* CreateDefaultTweenWidgetMoveFromToEventWithParam(UObject* WorldContextObject, UWidget* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetMoveFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenWidgetMoveFromToEvent* CreateDefaultTweenWidgetMoveFromToEvent(UObject* WorldContextObject, UWidget* pTarget, FVector2D TweenFrom, FVector2D TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetMoveFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenWidgetColorFromToEvent* CreateDefaultTweenWidgetColorFromToEventWithParam(UObject* WorldContextObject, UWidget* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetColorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenWidgetColorFromToEvent* CreateDefaultTweenWidgetColorFromToEvent(UObject* WorldContextObject, UWidget* pTarget, FLinearColor TweenFrom, FLinearColor TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetColorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenVectorEvent* CreateDefaultTweenVectorEventWithParam(UObject* WorldContextObject, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventVectorParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenVectorEvent* CreateDefaultTweenVectorEvent(UObject* WorldContextObject, FVector TweenFrom, FVector TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventVectorParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenVector2DEvent* CreateDefaultTweenVector2DEventWithParam(UObject* WorldContextObject, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetVector2DParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenVector2DEvent* CreateDefaultTweenVector2DEvent(UObject* WorldContextObject, FVector2D TweenFrom, FVector2D TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetVector2DParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenSplinePathEvent* CreateDefaultTweenSplinePathEventWithParamWithSplineComponentAndParam(UObject* WorldContextObject, USplineComponent* pSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenSplinePathEvent* CreateDefaultTweenSplinePathEventWithParamWithSplineActorAndParam(UObject* WorldContextObject, AActor* pActorWithSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenSplinePathEvent* CreateDefaultTweenSplinePathEventWithParam(UObject* WorldContextObject, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenSceneComponentScaleFromToEvent* CreateDefaultTweenSceneComponentScaleFromToEventWithParam(UObject* WorldContextObject, USceneComponent* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentScaleFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenSceneComponentScaleFromToEvent* CreateDefaultTweenSceneComponentScaleFromToEvent(UObject* WorldContextObject, USceneComponent* pTarget, FVector TweenFrom, FVector TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentScaleFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenSceneComponentRotatorFromToEvent* CreateDefaultTweenSceneComponentRotatorFromToEventWithParam(UObject* WorldContextObject, USceneComponent* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentRotatorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenSceneComponentRotatorFromToEvent* CreateDefaultTweenSceneComponentRotatorFromToEvent(UObject* WorldContextObject, USceneComponent* pTarget, FRotator TweenFrom, FRotator TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentRotatorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenSceneComponentMoveSplinePathEvent* CreateDefaultTweenSceneComponentMoveSplinePathEventWithSplineComponentAndParam(UObject* WorldContextObject, USceneComponent* pTarget, USplineComponent* pSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenSceneComponentMoveSplinePathEvent* CreateDefaultTweenSceneComponentMoveSplinePathEventWithSplineActorAndParam(UObject* WorldContextObject, USceneComponent* pTarget, AActor* pActorWithSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenSceneComponentMoveSplinePathEvent* CreateDefaultTweenSceneComponentMoveSplinePathEventWithParam(UObject* WorldContextObject, USceneComponent* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenSceneComponentMoveFromToEvent* CreateDefaultTweenSceneComponentMoveFromToEventWithParam(UObject* WorldContextObject, USceneComponent* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentMoveFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenSceneComponentMoveFromToEvent* CreateDefaultTweenSceneComponentMoveFromToEvent(UObject* WorldContextObject, USceneComponent* pTarget, FVector TweenFrom, FVector TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentMoveFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenSceneComponentColorFromToEvent* CreateDefaultTweenSceneComponentColorFromToEventWithParam(UObject* WorldContextObject, USceneComponent* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentColorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenSceneComponentColorFromToEvent* CreateDefaultTweenSceneComponentColorFromToEvent(UObject* WorldContextObject, USceneComponent* pTarget, FLinearColor TweenFrom, FLinearColor TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentColorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenRotatorEvent* CreateDefaultTweenRotatorEventWithParam(UObject* WorldContextObject, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventRotatorParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenRotatorEvent* CreateDefaultTweenRotatorEvent(UObject* WorldContextObject, FRotator TweenFrom, FRotator TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventRotatorParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenLinearColorEvent* CreateDefaultTweenLinearColorEventWithParam(UObject* WorldContextObject, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventLinearColorParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenLinearColorEvent* CreateDefaultTweenLinearColorEvent(UObject* WorldContextObject, FLinearColor TweenFrom, FLinearColor TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventLinearColorParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenFloatEvent* CreateDefaultTweenFloatEventWithParam(UObject* WorldContextObject, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventFloatParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenFloatEvent* CreateDefaultTweenFloatEvent(UObject* WorldContextObject, float TweenFrom, float TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventFloatParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenEvent* CreateDefaultTweenEventWithParameter(UObject* WorldContextObject, const FHorizonTweenEventParameters& Param);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenActorScaleFromToEvent* CreateDefaultTweenActorScaleFromToEventWithParam(UObject* WorldContextObject, AActor* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorScaleFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenActorScaleFromToEvent* CreateDefaultTweenActorScaleFromToEvent(UObject* WorldContextObject, AActor* pTarget, FVector TweenFrom, FVector TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorScaleFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenActorRotatorFromToEvent* CreateDefaultTweenActorRotatorFromToEventWithParam(UObject* WorldContextObject, AActor* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorRotatorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenActorRotatorFromToEvent* CreateDefaultTweenActorRotatorFromToEvent(UObject* WorldContextObject, AActor* pTarget, FRotator TweenFrom, FRotator TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorRotatorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenActorMoveSplinePathEvent* CreateDefaultTweenActorMoveSplinePathEventWithSplineComponentAndParam(UObject* WorldContextObject, AActor* pTarget, USplineComponent* pSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenActorMoveSplinePathEvent* CreateDefaultTweenActorMoveSplinePathEventWithSplineActorAndParam(UObject* WorldContextObject, AActor* pTarget, AActor* pActorWithSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenActorMoveSplinePathEvent* CreateDefaultTweenActorMoveSplinePathEventWithParam(UObject* WorldContextObject, AActor* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenActorMoveFromToEvent* CreateDefaultTweenActorMoveFromToEventWithParam(UObject* WorldContextObject, AActor* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorMoveFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenActorMoveFromToEvent* CreateDefaultTweenActorMoveFromToEvent(UObject* WorldContextObject, AActor* pTarget, FVector TweenFrom, FVector TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorMoveFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenActorColorFromToEvent* CreateDefaultTweenActorColorFromToEventWithParam(UObject* WorldContextObject, AActor* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorColorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenActorColorFromToEvent* CreateDefaultTweenActorColorFromToEvent(UObject* WorldContextObject, AActor* pTarget, FLinearColor TweenFrom, FLinearColor TweenTo, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorColorFromToParameters& paramImpl);
    
};

