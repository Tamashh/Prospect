#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HorizonTweenEventActorColorFromToParameters.h"
#include "HorizonTweenEventActorMoveFromToParameters.h"
#include "HorizonTweenEventActorMoveSplinePathParameters.h"
#include "HorizonTweenEventActorParameters.h"
#include "HorizonTweenEventActorRotatorFromToParameters.h"
#include "HorizonTweenEventActorScaleFromToParameters.h"
#include "HorizonTweenEventFloatParameters.h"
#include "HorizonTweenEventLinearColorParameters.h"
#include "HorizonTweenEventParameters.h"
#include "HorizonTweenEventRotatorParameters.h"
#include "HorizonTweenEventSceneComponentColorFromToParameters.h"
#include "HorizonTweenEventSceneComponentMoveFromToParameters.h"
#include "HorizonTweenEventSceneComponentMoveSplinePathParameters.h"
#include "HorizonTweenEventSceneComponentParameters.h"
#include "HorizonTweenEventSceneComponentRotatorFromToParameters.h"
#include "HorizonTweenEventSceneComponentScaleFromToParameters.h"
#include "HorizonTweenEventSplinePathParameters.h"
#include "HorizonTweenEventVectorParameters.h"
#include "HorizonTweenEventWidgetColorFromToParameters.h"
#include "HorizonTweenEventWidgetMoveFromToParameters.h"
#include "HorizonTweenEventWidgetMoveSplinePathParameters.h"
#include "HorizonTweenEventWidgetParameters.h"
#include "HorizonTweenEventWidgetRotatorFromToParameters.h"
#include "HorizonTweenEventWidgetScaleFromToParameters.h"
#include "HorizonTweenEventWidgetSheerFromToParameters.h"
#include "HorizonTweenEventWidgetVector2DParameters.h"
#include "HorizonTweenSystemLibrary.generated.h"

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

UCLASS(Blueprintable)
class HORIZONTWEEN_API UHorizonTweenSystemLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHorizonTweenSystemLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AHorizonTweenSystem* GetTweenSystemWithName(UObject* WorldContextObject, const FName& SystemName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AHorizonTweenSystem* GetDefaultTweenSystem(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenWidgetSheerFromToEvent* CreateTweenWidgetSheerFromToEventWithParam(UObject* WorldContextObject, UWidget* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetSheerFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenWidgetScaleFromToEvent* CreateTweenWidgetScaleFromToEventWithParam(UObject* WorldContextObject, UWidget* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetScaleFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenWidgetRotatorFromToEvent* CreateTweenWidgetRotatorFromToEventWithParam(UObject* WorldContextObject, UWidget* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetRotatorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenWidgetMoveSplinePathEvent* CreateTweenWidgetMoveSplinePathEventWithSplineComponentAndParam(UObject* WorldContextObject, UWidget* pTarget, USplineComponent* pSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenWidgetMoveSplinePathEvent* CreateTweenWidgetMoveSplinePathEventWithSplineActorAndParam(UObject* WorldContextObject, UWidget* pTarget, AActor* pWidgetWithSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenWidgetMoveSplinePathEvent* CreateTweenWidgetMoveSplinePathEventWithParam(UObject* WorldContextObject, UWidget* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenWidgetMoveFromToEvent* CreateTweenWidgetMoveFromToEventWithParam(UObject* WorldContextObject, UWidget* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetMoveFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CreateTweenWidgetEventWithParam(UObject* WorldContextObject, UWidget* pTarget, UPARAM(Ref) FHorizonTweenEventWidgetParameters& Params, UHorizonTweenWidgetMoveFromToEvent*& OutMoveEvent, UHorizonTweenWidgetRotatorFromToEvent*& OutRotateEvent, UHorizonTweenWidgetScaleFromToEvent*& OutScaleEvent, UHorizonTweenWidgetSheerFromToEvent*& OutSheerEvent, UHorizonTweenWidgetColorFromToEvent*& OutColorEvent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenWidgetColorFromToEvent* CreateTweenWidgetColorFromToEventWithParam(UObject* WorldContextObject, UWidget* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetColorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenVectorEvent* CreateTweenVectorEventWithParam(UObject* WorldContextObject, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventVectorParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenVector2DEvent* CreateTweenVector2DEventWithParam(UObject* WorldContextObject, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetVector2DParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenSplinePathEvent* CreateTweenSplinePathEventWithParamWithSplineComponentAndParam(UObject* WorldContextObject, USplineComponent* pSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenSplinePathEvent* CreateTweenSplinePathEventWithParamWithSplineActorAndParam(UObject* WorldContextObject, AActor* pActorWithSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenSplinePathEvent* CreateTweenSplinePathEventWithParam(UObject* WorldContextObject, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenSceneComponentScaleFromToEvent* CreateTweenSceneComponentScaleFromToEventWithParam(UObject* WorldContextObject, USceneComponent* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentScaleFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenSceneComponentRotatorFromToEvent* CreateTweenSceneComponentRotatorFromToEventWithParam(UObject* WorldContextObject, USceneComponent* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentRotatorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenSceneComponentMoveSplinePathEvent* CreateTweenSceneComponentMoveSplinePathEventWithSplineComponentAndParam(UObject* WorldContextObject, USceneComponent* pTarget, USplineComponent* pSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenSceneComponentMoveSplinePathEvent* CreateTweenSceneComponentMoveSplinePathEventWithSplineActorAndParam(UObject* WorldContextObject, USceneComponent* pTarget, AActor* pActorWithSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenSceneComponentMoveSplinePathEvent* CreateTweenSceneComponentMoveSplinePathEventWithParam(UObject* WorldContextObject, USceneComponent* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenSceneComponentMoveFromToEvent* CreateTweenSceneComponentMoveFromToEventWithParam(UObject* WorldContextObject, USceneComponent* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentMoveFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CreateTweenSceneComponentEventWithParam(UObject* WorldContextObject, USceneComponent* pTarget, UPARAM(Ref) FHorizonTweenEventSceneComponentParameters& Params, UHorizonTweenSceneComponentMoveFromToEvent*& OutMoveEvent, UHorizonTweenSceneComponentRotatorFromToEvent*& OutRotateEvent, UHorizonTweenSceneComponentScaleFromToEvent*& OutScaleEvent, UHorizonTweenSceneComponentColorFromToEvent*& OutColorEvent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenSceneComponentColorFromToEvent* CreateTweenSceneComponentColorFromToEventWithParam(UObject* WorldContextObject, USceneComponent* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentColorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenRotatorEvent* CreateTweenRotatorEventWithParam(UObject* WorldContextObject, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventRotatorParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenLinearColorEvent* CreateTweenLinearColorEventWithParam(UObject* WorldContextObject, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventLinearColorParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenFloatEvent* CreateTweenFloatEventWithParam(UObject* WorldContextObject, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventFloatParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenEvent* CreateTweenEventWithParameter(UObject* WorldContextObject, const FHorizonTweenEventParameters& Param);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenActorScaleFromToEvent* CreateTweenActorScaleFromToEventWithParam(UObject* WorldContextObject, AActor* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorScaleFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenActorRotatorFromToEvent* CreateTweenActorRotatorFromToEventWithParam(UObject* WorldContextObject, AActor* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorRotatorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenActorMoveSplinePathEvent* CreateTweenActorMoveSplinePathEventWithSplineComponentAndParam(UObject* WorldContextObject, AActor* pTarget, USplineComponent* pSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenActorMoveSplinePathEvent* CreateTweenActorMoveSplinePathEventWithSplineActorAndParam(UObject* WorldContextObject, AActor* pTarget, AActor* pActorWithSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenActorMoveSplinePathEvent* CreateTweenActorMoveSplinePathEventWithParam(UObject* WorldContextObject, AActor* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenActorMoveFromToEvent* CreateTweenActorMoveFromToEventWithParam(UObject* WorldContextObject, AActor* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorMoveFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CreateTweenActorEventWithParam(UObject* WorldContextObject, AActor* pTarget, UPARAM(Ref) FHorizonTweenEventActorParameters& Params, UHorizonTweenActorMoveFromToEvent*& OutMoveEvent, UHorizonTweenActorRotatorFromToEvent*& OutRotateEvent, UHorizonTweenActorScaleFromToEvent*& OutScaleEvent, UHorizonTweenActorColorFromToEvent*& OutColorEvent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHorizonTweenActorColorFromToEvent* CreateTweenActorColorFromToEventWithParam(UObject* WorldContextObject, AActor* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorColorFromToParameters& paramImpl);
    
};

