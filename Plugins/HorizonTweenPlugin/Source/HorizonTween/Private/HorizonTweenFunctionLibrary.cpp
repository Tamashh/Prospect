#include "HorizonTweenFunctionLibrary.h"

UHorizonTweenFunctionLibrary::UHorizonTweenFunctionLibrary() {
}

FVector UHorizonTweenFunctionLibrary::VLerp(TEnumAsByte<EHorizonTweenLerpMode::Type> eLerpType, const FVector& Start, const FVector& End, float Alpha, TArray<float> extraParameterList) {
    return FVector{};
}

FVector2D UHorizonTweenFunctionLibrary::V2DLerp(TEnumAsByte<EHorizonTweenLerpMode::Type> eLerpType, const FVector2D& Start, const FVector2D& End, float Alpha, TArray<float> extraParameterList) {
    return FVector2D{};
}

bool UHorizonTweenFunctionLibrary::SetTweenWidgetSplineComponentByComponent(FHorizonTweenEventWidgetMoveSplinePathParameters& paramImpl, USplineComponent* pSplineComponent) {
    return false;
}

bool UHorizonTweenFunctionLibrary::SetTweenWidgetSplineComponentByActor(FHorizonTweenEventWidgetMoveSplinePathParameters& paramImpl, AActor* pActor) {
    return false;
}

bool UHorizonTweenFunctionLibrary::SetTweenSceneComponentSplineComponentByComponent(FHorizonTweenEventSceneComponentMoveSplinePathParameters& paramImpl, USplineComponent* pSplineComponent) {
    return false;
}

bool UHorizonTweenFunctionLibrary::SetTweenSceneComponentSplineComponentByActor(FHorizonTweenEventSceneComponentMoveSplinePathParameters& paramImpl, AActor* pActor) {
    return false;
}

bool UHorizonTweenFunctionLibrary::SetTweenActorSplineComponentByComponent(FHorizonTweenEventActorMoveSplinePathParameters& paramImpl, USplineComponent* pSplineComponent) {
    return false;
}

bool UHorizonTweenFunctionLibrary::SetTweenActorSplineComponentByActor(FHorizonTweenEventActorMoveSplinePathParameters& paramImpl, AActor* pActor) {
    return false;
}

FRotator UHorizonTweenFunctionLibrary::RLerp(TEnumAsByte<EHorizonTweenLerpMode::Type> eLerpType, const FRotator& Start, const FRotator& End, float Alpha, TArray<float> extraParameterList) {
    return FRotator{};
}

bool UHorizonTweenFunctionLibrary::ProcessCollision(UHorizonTweenEvent* pTweenEvent, const FHorizonTweenEventTransformParam& TransformParam) {
    return false;
}

FLinearColor UHorizonTweenFunctionLibrary::LinearColorLerp(TEnumAsByte<EHorizonTweenLerpMode::Type> eLerpType, const FLinearColor& Start, const FLinearColor& End, float Alpha, TArray<float> extraParameterList) {
    return FLinearColor{};
}

USceneComponent* UHorizonTweenFunctionLibrary::GetChildComponentByName(USceneComponent* pParent, FName Name, bool bIncludeAllDescendants) {
    return NULL;
}

float UHorizonTweenFunctionLibrary::FloatLerp(TEnumAsByte<EHorizonTweenLerpMode::Type> eLerpType, const float Start, const float End, float Alpha, TArray<float> extraParameterList) {
    return 0.0f;
}

void UHorizonTweenFunctionLibrary::ConstrainsVector2D(TEnumAsByte<EHorizonTweenVector2DConstraints::Type> eType, const FVector2D& originVec, FVector2D& replacedVec) {
}

void UHorizonTweenFunctionLibrary::ConstrainsVector(TEnumAsByte<EHorizonTweenVectorConstraints::Type> eType, const FVector& originVec, FVector& replacedVec) {
}


