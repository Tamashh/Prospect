#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
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
#include "OnHorizonTweenEventDelegate.h"
#include "HorizonTweenSystem.generated.h"

class AActor;
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
class HORIZONTWEEN_API AHorizonTweenSystem : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHorizonTweenEvent OnAddTweenEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UHorizonTweenEvent*> TweenEventMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHorizonTweenEvent*> PendingKillTweenEvenList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHorizonTweenEvent*> PendingAddTweenEvenList;
    
public:
    AHorizonTweenSystem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopTweenEventByObject(UObject* pTweenTarget);
    
    UFUNCTION(BlueprintCallable)
    void StopTweenEventByName(const FName& EventName);
    
    UFUNCTION(BlueprintCallable)
    void StopAllTweenEvent();
    
    UFUNCTION(BlueprintCallable)
    void ResumeTweenEventByObject(UObject* pTweenTarget);
    
    UFUNCTION(BlueprintCallable)
    void ResumeTweenEventByName(const FName& EventName);
    
    UFUNCTION(BlueprintCallable)
    void ResumeAllTweenEvent();
    
    UFUNCTION(BlueprintCallable)
    void RemoveTweenEventByObject(UObject* pTweenTarget);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTweenEventByName(const FName& EventName);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllTweenEvent();
    
    UFUNCTION(BlueprintCallable)
    void PlayTweenEventByObject(UObject* pTweenTarget);
    
    UFUNCTION(BlueprintCallable)
    void PlayTweenEventByName(const FName& EventName);
    
    UFUNCTION(BlueprintCallable)
    void PlayAllTweenEvent();
    
    UFUNCTION(BlueprintCallable)
    void PauseTweenEventByObject(UObject* pTweenTarget);
    
    UFUNCTION(BlueprintCallable)
    void PauseTweenEventByName(const FName& EventName);
    
    UFUNCTION(BlueprintCallable)
    void PauseAllTweenEvent();
    
    UFUNCTION(BlueprintCallable)
    TMap<FName, UHorizonTweenEvent*> GetTweenEventMap();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumTweenEvent();
    
    UFUNCTION(BlueprintCallable)
    void FinishTweenEventByObject(UObject* pTweenTarget, bool bTweenToEnd);
    
    UFUNCTION(BlueprintCallable)
    void FinishTweenEventByName(const FName& EventName, bool bTweenToEnd);
    
    UFUNCTION(BlueprintCallable)
    void FinishAllTweenEvent(bool bTweenToEnd);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenEvent* FindTweenEventByName(const FName& EventName);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenWidgetSheerFromToEvent* CreateTweenWidgetSheerFromToEventWithParam(UWidget* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetSheerFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenWidgetScaleFromToEvent* CreateTweenWidgetScaleFromToEventWithParam(UWidget* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetScaleFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenWidgetRotatorFromToEvent* CreateTweenWidgetRotatorFromToEventWithParam(UWidget* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetRotatorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenWidgetMoveSplinePathEvent* CreateTweenWidgetMoveSplinePathEventWithSplineComponentAndParam(UWidget* pTarget, USplineComponent* pSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenWidgetMoveSplinePathEvent* CreateTweenWidgetMoveSplinePathEventWithSplineActorAndParam(UWidget* pTarget, AActor* pWidgetWithSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenWidgetMoveSplinePathEvent* CreateTweenWidgetMoveSplinePathEventWithParam(UWidget* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenWidgetMoveFromToEvent* CreateTweenWidgetMoveFromToEventWithParam(UWidget* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetMoveFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    void CreateTweenWidgetEventWithParam(UWidget* pTarget, UPARAM(Ref) FHorizonTweenEventWidgetParameters& Params, UHorizonTweenWidgetMoveFromToEvent*& OutMoveEvent, UHorizonTweenWidgetRotatorFromToEvent*& OutRotateEvent, UHorizonTweenWidgetScaleFromToEvent*& OutScaleEvent, UHorizonTweenWidgetSheerFromToEvent*& OutSheerEvent, UHorizonTweenWidgetColorFromToEvent*& OutColorEvent);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenWidgetColorFromToEvent* CreateTweenWidgetColorFromToEventWithParam(UWidget* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetColorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenVectorEvent* CreateTweenVectorEventWithParam(const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventVectorParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenVector2DEvent* CreateTweenVector2DEventWithParam(const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventWidgetVector2DParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenSplinePathEvent* CreateTweenSplinePathEventWithParamWithSplineComponentAndParam(USplineComponent* pSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenSplinePathEvent* CreateTweenSplinePathEventWithParamWithSplineActorAndParam(AActor* pActorWithSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenSplinePathEvent* CreateTweenSplinePathEventWithParam(const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenSceneComponentScaleFromToEvent* CreateTweenSceneComponentScaleFromToEventWithParam(USceneComponent* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentScaleFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenSceneComponentRotatorFromToEvent* CreateTweenSceneComponentRotatorFromToEventWithParam(USceneComponent* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentRotatorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenSceneComponentMoveSplinePathEvent* CreateTweenSceneComponentMoveSplinePathEventWithSplineComponentAndParam(USceneComponent* pTarget, USplineComponent* pSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenSceneComponentMoveSplinePathEvent* CreateTweenSceneComponentMoveSplinePathEventWithSplineActorAndParam(USceneComponent* pTarget, AActor* pActorWithSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenSceneComponentMoveSplinePathEvent* CreateTweenSceneComponentMoveSplinePathEventWithParam(USceneComponent* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenSceneComponentMoveFromToEvent* CreateTweenSceneComponentMoveFromToEventWithParam(USceneComponent* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentMoveFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    void CreateTweenSceneComponentEventWithParam(USceneComponent* pTarget, UPARAM(Ref) FHorizonTweenEventSceneComponentParameters& Params, UHorizonTweenSceneComponentMoveFromToEvent*& OutMoveEvent, UHorizonTweenSceneComponentRotatorFromToEvent*& OutRotateEvent, UHorizonTweenSceneComponentScaleFromToEvent*& OutScaleEvent, UHorizonTweenSceneComponentColorFromToEvent*& OutColorEvent);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenSceneComponentColorFromToEvent* CreateTweenSceneComponentColorFromToEventWithParam(USceneComponent* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventSceneComponentColorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenRotatorEvent* CreateTweenRotatorEventWithParam(const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventRotatorParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenLinearColorEvent* CreateTweenLinearColorEventWithParam(const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventLinearColorParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenFloatEvent* CreateTweenFloatEventWithParam(const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventFloatParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenEvent* CreateTweenEventWithParameter(const FHorizonTweenEventParameters& Param);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenActorScaleFromToEvent* CreateTweenActorScaleFromToEventWithParam(AActor* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorScaleFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenActorRotatorFromToEvent* CreateTweenActorRotatorFromToEventWithParam(AActor* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorRotatorFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenActorMoveSplinePathEvent* CreateTweenActorMoveSplinePathEventWithSplineComponentAndParam(AActor* pTarget, USplineComponent* pSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenActorMoveSplinePathEvent* CreateTweenActorMoveSplinePathEventWithSplineActorAndParam(AActor* pTarget, AActor* pActorWithSplineComponent, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenActorMoveSplinePathEvent* CreateTweenActorMoveSplinePathEventWithParam(AActor* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorMoveSplinePathParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenActorMoveFromToEvent* CreateTweenActorMoveFromToEventWithParam(AActor* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorMoveFromToParameters& paramImpl);
    
    UFUNCTION(BlueprintCallable)
    void CreateTweenActorEventWithParam(AActor* pTarget, UPARAM(Ref) FHorizonTweenEventActorParameters& Params, UHorizonTweenActorMoveFromToEvent*& OutMoveEvent, UHorizonTweenActorRotatorFromToEvent*& OutRotateEvent, UHorizonTweenActorScaleFromToEvent*& OutScaleEvent, UHorizonTweenActorColorFromToEvent*& OutColorEvent);
    
    UFUNCTION(BlueprintCallable)
    UHorizonTweenActorColorFromToEvent* CreateTweenActorColorFromToEventWithParam(AActor* pTarget, const FHorizonTweenEventParameters& Param, UPARAM(Ref) FHorizonTweenEventActorColorFromToParameters& paramImpl);
    
};

