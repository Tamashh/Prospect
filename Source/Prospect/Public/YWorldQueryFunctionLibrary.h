#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Kismet/KismetSystemLibrary.h"
#include "YWorldQueryFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class PROSPECT_API UYWorldQueryFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYWorldQueryFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool CapsuleOverlapAnyTestByChannel(const UObject* worldCtxObject, const FVector A, const FVector B, const float CapsuleRadius, TEnumAsByte<ECollisionChannel> CollisionChannel, bool bTraceComplex, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, bool bIgnoreSelf, FLinearColor noOverlapColor, FLinearColor overlapColor, float DrawTime);

};
