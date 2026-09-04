#include "HorizonTweenSystem.h"

AHorizonTweenSystem::AHorizonTweenSystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AHorizonTweenSystem::StopTweenEventByObject(UObject* pTweenTarget) {
}

void AHorizonTweenSystem::StopTweenEventByName(const FName& EventName) {
}

void AHorizonTweenSystem::StopAllTweenEvent() {
}

void AHorizonTweenSystem::ResumeTweenEventByObject(UObject* pTweenTarget) {
}

void AHorizonTweenSystem::ResumeTweenEventByName(const FName& EventName) {
}

void AHorizonTweenSystem::ResumeAllTweenEvent() {
}

void AHorizonTweenSystem::RemoveTweenEventByObject(UObject* pTweenTarget) {
}

void AHorizonTweenSystem::RemoveTweenEventByName(const FName& EventName) {
}

void AHorizonTweenSystem::RemoveAllTweenEvent() {
}

void AHorizonTweenSystem::PlayTweenEventByObject(UObject* pTweenTarget) {
}

void AHorizonTweenSystem::PlayTweenEventByName(const FName& EventName) {
}

void AHorizonTweenSystem::PlayAllTweenEvent() {
}

void AHorizonTweenSystem::PauseTweenEventByObject(UObject* pTweenTarget) {
}

void AHorizonTweenSystem::PauseTweenEventByName(const FName& EventName) {
}

void AHorizonTweenSystem::PauseAllTweenEvent() {
}

TMap<FName, UHorizonTweenEvent*> AHorizonTweenSystem::GetTweenEventMap() {
    return TMap<FName, UHorizonTweenEvent*>();
}

int32 AHorizonTweenSystem::GetNumTweenEvent() {
    return 0;
}

void AHorizonTweenSystem::FinishTweenEventByObject(UObject* pTweenTarget, bool bTweenToEnd) {
}

void AHorizonTweenSystem::FinishTweenEventByName(const FName& EventName, bool bTweenToEnd) {
}

void AHorizonTweenSystem::FinishAllTweenEvent(bool bTweenToEnd) {
}

UHorizonTweenEvent* AHorizonTweenSystem::FindTweenEventByName(const FName& EventName) {
    return NULL;
}

UHorizonTweenWidgetSheerFromToEvent* AHorizonTweenSystem::CreateTweenWidgetSheerFromToEventWithParam(UWidget* pTarget, const FHorizonTweenEventParameters& Param, FHorizonTweenEventWidgetSheerFromToParameters& paramImpl) {
    return NULL;
}

UHorizonTweenWidgetScaleFromToEvent* AHorizonTweenSystem::CreateTweenWidgetScaleFromToEventWithParam(UWidget* pTarget, const FHorizonTweenEventParameters& Param, FHorizonTweenEventWidgetScaleFromToParameters& paramImpl) {
    return NULL;
}

UHorizonTweenWidgetRotatorFromToEvent* AHorizonTweenSystem::CreateTweenWidgetRotatorFromToEventWithParam(UWidget* pTarget, const FHorizonTweenEventParameters& Param, FHorizonTweenEventWidgetRotatorFromToParameters& paramImpl) {
    return NULL;
}

UHorizonTweenWidgetMoveSplinePathEvent* AHorizonTweenSystem::CreateTweenWidgetMoveSplinePathEventWithSplineComponentAndParam(UWidget* pTarget, USplineComponent* pSplineComponent, const FHorizonTweenEventParameters& Param, FHorizonTweenEventWidgetMoveSplinePathParameters& paramImpl) {
    return NULL;
}

UHorizonTweenWidgetMoveSplinePathEvent* AHorizonTweenSystem::CreateTweenWidgetMoveSplinePathEventWithSplineActorAndParam(UWidget* pTarget, AActor* pWidgetWithSplineComponent, const FHorizonTweenEventParameters& Param, FHorizonTweenEventWidgetMoveSplinePathParameters& paramImpl) {
    return NULL;
}

UHorizonTweenWidgetMoveSplinePathEvent* AHorizonTweenSystem::CreateTweenWidgetMoveSplinePathEventWithParam(UWidget* pTarget, const FHorizonTweenEventParameters& Param, FHorizonTweenEventWidgetMoveSplinePathParameters& paramImpl) {
    return NULL;
}

UHorizonTweenWidgetMoveFromToEvent* AHorizonTweenSystem::CreateTweenWidgetMoveFromToEventWithParam(UWidget* pTarget, const FHorizonTweenEventParameters& Param, FHorizonTweenEventWidgetMoveFromToParameters& paramImpl) {
    return NULL;
}

void AHorizonTweenSystem::CreateTweenWidgetEventWithParam(UWidget* pTarget, FHorizonTweenEventWidgetParameters& Params, UHorizonTweenWidgetMoveFromToEvent*& OutMoveEvent, UHorizonTweenWidgetRotatorFromToEvent*& OutRotateEvent, UHorizonTweenWidgetScaleFromToEvent*& OutScaleEvent, UHorizonTweenWidgetSheerFromToEvent*& OutSheerEvent, UHorizonTweenWidgetColorFromToEvent*& OutColorEvent) {
}

UHorizonTweenWidgetColorFromToEvent* AHorizonTweenSystem::CreateTweenWidgetColorFromToEventWithParam(UWidget* pTarget, const FHorizonTweenEventParameters& Param, FHorizonTweenEventWidgetColorFromToParameters& paramImpl) {
    return NULL;
}

UHorizonTweenVectorEvent* AHorizonTweenSystem::CreateTweenVectorEventWithParam(const FHorizonTweenEventParameters& Param, FHorizonTweenEventVectorParameters& paramImpl) {
    return NULL;
}

UHorizonTweenVector2DEvent* AHorizonTweenSystem::CreateTweenVector2DEventWithParam(const FHorizonTweenEventParameters& Param, FHorizonTweenEventWidgetVector2DParameters& paramImpl) {
    return NULL;
}

UHorizonTweenSplinePathEvent* AHorizonTweenSystem::CreateTweenSplinePathEventWithParamWithSplineComponentAndParam(USplineComponent* pSplineComponent, const FHorizonTweenEventParameters& Param, FHorizonTweenEventSplinePathParameters& paramImpl) {
    return NULL;
}

UHorizonTweenSplinePathEvent* AHorizonTweenSystem::CreateTweenSplinePathEventWithParamWithSplineActorAndParam(AActor* pActorWithSplineComponent, const FHorizonTweenEventParameters& Param, FHorizonTweenEventSplinePathParameters& paramImpl) {
    return NULL;
}

UHorizonTweenSplinePathEvent* AHorizonTweenSystem::CreateTweenSplinePathEventWithParam(const FHorizonTweenEventParameters& Param, FHorizonTweenEventSplinePathParameters& paramImpl) {
    return NULL;
}

UHorizonTweenSceneComponentScaleFromToEvent* AHorizonTweenSystem::CreateTweenSceneComponentScaleFromToEventWithParam(USceneComponent* pTarget, const FHorizonTweenEventParameters& Param, FHorizonTweenEventSceneComponentScaleFromToParameters& paramImpl) {
    return NULL;
}

UHorizonTweenSceneComponentRotatorFromToEvent* AHorizonTweenSystem::CreateTweenSceneComponentRotatorFromToEventWithParam(USceneComponent* pTarget, const FHorizonTweenEventParameters& Param, FHorizonTweenEventSceneComponentRotatorFromToParameters& paramImpl) {
    return NULL;
}

UHorizonTweenSceneComponentMoveSplinePathEvent* AHorizonTweenSystem::CreateTweenSceneComponentMoveSplinePathEventWithSplineComponentAndParam(USceneComponent* pTarget, USplineComponent* pSplineComponent, const FHorizonTweenEventParameters& Param, FHorizonTweenEventSceneComponentMoveSplinePathParameters& paramImpl) {
    return NULL;
}

UHorizonTweenSceneComponentMoveSplinePathEvent* AHorizonTweenSystem::CreateTweenSceneComponentMoveSplinePathEventWithSplineActorAndParam(USceneComponent* pTarget, AActor* pActorWithSplineComponent, const FHorizonTweenEventParameters& Param, FHorizonTweenEventSceneComponentMoveSplinePathParameters& paramImpl) {
    return NULL;
}

UHorizonTweenSceneComponentMoveSplinePathEvent* AHorizonTweenSystem::CreateTweenSceneComponentMoveSplinePathEventWithParam(USceneComponent* pTarget, const FHorizonTweenEventParameters& Param, FHorizonTweenEventSceneComponentMoveSplinePathParameters& paramImpl) {
    return NULL;
}

UHorizonTweenSceneComponentMoveFromToEvent* AHorizonTweenSystem::CreateTweenSceneComponentMoveFromToEventWithParam(USceneComponent* pTarget, const FHorizonTweenEventParameters& Param, FHorizonTweenEventSceneComponentMoveFromToParameters& paramImpl) {
    return NULL;
}

void AHorizonTweenSystem::CreateTweenSceneComponentEventWithParam(USceneComponent* pTarget, FHorizonTweenEventSceneComponentParameters& Params, UHorizonTweenSceneComponentMoveFromToEvent*& OutMoveEvent, UHorizonTweenSceneComponentRotatorFromToEvent*& OutRotateEvent, UHorizonTweenSceneComponentScaleFromToEvent*& OutScaleEvent, UHorizonTweenSceneComponentColorFromToEvent*& OutColorEvent) {
}

UHorizonTweenSceneComponentColorFromToEvent* AHorizonTweenSystem::CreateTweenSceneComponentColorFromToEventWithParam(USceneComponent* pTarget, const FHorizonTweenEventParameters& Param, FHorizonTweenEventSceneComponentColorFromToParameters& paramImpl) {
    return NULL;
}

UHorizonTweenRotatorEvent* AHorizonTweenSystem::CreateTweenRotatorEventWithParam(const FHorizonTweenEventParameters& Param, FHorizonTweenEventRotatorParameters& paramImpl) {
    return NULL;
}

UHorizonTweenLinearColorEvent* AHorizonTweenSystem::CreateTweenLinearColorEventWithParam(const FHorizonTweenEventParameters& Param, FHorizonTweenEventLinearColorParameters& paramImpl) {
    return NULL;
}

UHorizonTweenFloatEvent* AHorizonTweenSystem::CreateTweenFloatEventWithParam(const FHorizonTweenEventParameters& Param, FHorizonTweenEventFloatParameters& paramImpl) {
    return NULL;
}

UHorizonTweenEvent* AHorizonTweenSystem::CreateTweenEventWithParameter(const FHorizonTweenEventParameters& Param) {
    return NULL;
}

UHorizonTweenActorScaleFromToEvent* AHorizonTweenSystem::CreateTweenActorScaleFromToEventWithParam(AActor* pTarget, const FHorizonTweenEventParameters& Param, FHorizonTweenEventActorScaleFromToParameters& paramImpl) {
    return NULL;
}

UHorizonTweenActorRotatorFromToEvent* AHorizonTweenSystem::CreateTweenActorRotatorFromToEventWithParam(AActor* pTarget, const FHorizonTweenEventParameters& Param, FHorizonTweenEventActorRotatorFromToParameters& paramImpl) {
    return NULL;
}

UHorizonTweenActorMoveSplinePathEvent* AHorizonTweenSystem::CreateTweenActorMoveSplinePathEventWithSplineComponentAndParam(AActor* pTarget, USplineComponent* pSplineComponent, const FHorizonTweenEventParameters& Param, FHorizonTweenEventActorMoveSplinePathParameters& paramImpl) {
    return NULL;
}

UHorizonTweenActorMoveSplinePathEvent* AHorizonTweenSystem::CreateTweenActorMoveSplinePathEventWithSplineActorAndParam(AActor* pTarget, AActor* pActorWithSplineComponent, const FHorizonTweenEventParameters& Param, FHorizonTweenEventActorMoveSplinePathParameters& paramImpl) {
    return NULL;
}

UHorizonTweenActorMoveSplinePathEvent* AHorizonTweenSystem::CreateTweenActorMoveSplinePathEventWithParam(AActor* pTarget, const FHorizonTweenEventParameters& Param, FHorizonTweenEventActorMoveSplinePathParameters& paramImpl) {
    return NULL;
}

UHorizonTweenActorMoveFromToEvent* AHorizonTweenSystem::CreateTweenActorMoveFromToEventWithParam(AActor* pTarget, const FHorizonTweenEventParameters& Param, FHorizonTweenEventActorMoveFromToParameters& paramImpl) {
    return NULL;
}

void AHorizonTweenSystem::CreateTweenActorEventWithParam(AActor* pTarget, FHorizonTweenEventActorParameters& Params, UHorizonTweenActorMoveFromToEvent*& OutMoveEvent, UHorizonTweenActorRotatorFromToEvent*& OutRotateEvent, UHorizonTweenActorScaleFromToEvent*& OutScaleEvent, UHorizonTweenActorColorFromToEvent*& OutColorEvent) {
}

UHorizonTweenActorColorFromToEvent* AHorizonTweenSystem::CreateTweenActorColorFromToEventWithParam(AActor* pTarget, const FHorizonTweenEventParameters& Param, FHorizonTweenEventActorColorFromToParameters& paramImpl) {
    return NULL;
}


