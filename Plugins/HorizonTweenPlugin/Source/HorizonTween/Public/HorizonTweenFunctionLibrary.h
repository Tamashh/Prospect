#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EHorizonTweenLerpMode.h"
#include "EHorizonTweenVector2DConstraints.h"
#include "EHorizonTweenVectorConstraints.h"
#include "HorizonTweenEventActorMoveSplinePathParameters.h"
#include "HorizonTweenEventSceneComponentMoveSplinePathParameters.h"
#include "HorizonTweenEventTransformParam.h"
#include "HorizonTweenEventWidgetMoveSplinePathParameters.h"
#include "HorizonTweenFunctionLibrary.generated.h"

class AActor;
class UHorizonTweenEvent;
class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable)
class HORIZONTWEEN_API UHorizonTweenFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHorizonTweenFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static FVector VLerp(TEnumAsByte<EHorizonTweenLerpMode::Type> eLerpType, const FVector& Start, const FVector& End, float Alpha, TArray<float> extraParameterList);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D V2DLerp(TEnumAsByte<EHorizonTweenLerpMode::Type> eLerpType, const FVector2D& Start, const FVector2D& End, float Alpha, TArray<float> extraParameterList);
    
    UFUNCTION(BlueprintCallable)
    static bool SetTweenWidgetSplineComponentByComponent(UPARAM(Ref) FHorizonTweenEventWidgetMoveSplinePathParameters& paramImpl, USplineComponent* pSplineComponent);
    
    UFUNCTION(BlueprintCallable)
    static bool SetTweenWidgetSplineComponentByActor(UPARAM(Ref) FHorizonTweenEventWidgetMoveSplinePathParameters& paramImpl, AActor* pActor);
    
    UFUNCTION(BlueprintCallable)
    static bool SetTweenSceneComponentSplineComponentByComponent(UPARAM(Ref) FHorizonTweenEventSceneComponentMoveSplinePathParameters& paramImpl, USplineComponent* pSplineComponent);
    
    UFUNCTION(BlueprintCallable)
    static bool SetTweenSceneComponentSplineComponentByActor(UPARAM(Ref) FHorizonTweenEventSceneComponentMoveSplinePathParameters& paramImpl, AActor* pActor);
    
    UFUNCTION(BlueprintCallable)
    static bool SetTweenActorSplineComponentByComponent(UPARAM(Ref) FHorizonTweenEventActorMoveSplinePathParameters& paramImpl, USplineComponent* pSplineComponent);
    
    UFUNCTION(BlueprintCallable)
    static bool SetTweenActorSplineComponentByActor(UPARAM(Ref) FHorizonTweenEventActorMoveSplinePathParameters& paramImpl, AActor* pActor);
    
    UFUNCTION(BlueprintCallable)
    static FRotator RLerp(TEnumAsByte<EHorizonTweenLerpMode::Type> eLerpType, const FRotator& Start, const FRotator& End, float Alpha, TArray<float> extraParameterList);
    
    UFUNCTION(BlueprintCallable)
    static bool ProcessCollision(UHorizonTweenEvent* pTweenEvent, const FHorizonTweenEventTransformParam& TransformParam);
    
    UFUNCTION(BlueprintCallable)
    static FLinearColor LinearColorLerp(TEnumAsByte<EHorizonTweenLerpMode::Type> eLerpType, const FLinearColor& Start, const FLinearColor& End, float Alpha, TArray<float> extraParameterList);
    
    UFUNCTION(BlueprintCallable)
    static USceneComponent* GetChildComponentByName(USceneComponent* pParent, FName Name, bool bIncludeAllDescendants);
    
    UFUNCTION(BlueprintCallable)
    static float FloatLerp(TEnumAsByte<EHorizonTweenLerpMode::Type> eLerpType, const float Start, const float End, float Alpha, TArray<float> extraParameterList);
    
    UFUNCTION(BlueprintCallable)
    static void ConstrainsVector2D(TEnumAsByte<EHorizonTweenVector2DConstraints::Type> eType, const FVector2D& originVec, FVector2D& replacedVec);
    
    UFUNCTION(BlueprintCallable)
    static void ConstrainsVector(TEnumAsByte<EHorizonTweenVectorConstraints::Type> eType, const FVector& originVec, FVector& replacedVec);
    
};

