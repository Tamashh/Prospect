#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StriderMath.generated.h"

class AActor;

UCLASS(Blueprintable)
class STRIDER_API UStriderMath : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStriderMath();

    UFUNCTION(BlueprintCallable)
    static float WrapAngle(float Angle);
    
    UFUNCTION(BlueprintCallable)
    static void MoveTowardVector(FVector& InStart, const FVector& End, const float MaxDelta);
    
    UFUNCTION(BlueprintCallable)
    static float MoveTowardAngle(float StartAngle, float EndAngle, const float MaxDelta);
    
    UFUNCTION(BlueprintCallable)
    static float MoveToward(const float Start, const float End, const float MaxDelta);
    
    UFUNCTION(BlueprintCallable)
    static void MoveComponentsToward(FVector& InStart, const FVector& End, const float MaxDelta);
    
    UFUNCTION(BlueprintCallable)
    static float GetRotationRelativeToVelocity(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNextCardinalDirection(const int32 CurrentCardinalDirection, const float RelativeDirection, const float StepDelta, const float SkipDelta);
    
    UFUNCTION(BlueprintCallable)
    static float GetAngleDelta(const float StartAngle, const float EndAngle);
    
    UFUNCTION(BlueprintCallable)
    static float CalculateStrideScale(const float TotalSpeedScale, const float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    static float CalculatePlayRate(const float TotalSpeedScale, const float PlaybackWeight, const float MinPlayRate, const float MaxPlayRate);
    
    UFUNCTION(BlueprintCallable)
    static float CalculateCircleStrafeDirectionDelta(const float LastDirection, const float Direction, const float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    static float AngleBetween(const FVector& A, const FVector& B);
    
};

