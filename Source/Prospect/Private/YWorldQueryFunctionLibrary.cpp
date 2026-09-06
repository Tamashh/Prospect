#include "YWorldQueryFunctionLibrary.h"

UYWorldQueryFunctionLibrary::UYWorldQueryFunctionLibrary() {
}

bool UYWorldQueryFunctionLibrary::CapsuleOverlapAnyTestByChannel(const UObject* worldCtxObject, const FVector A, const FVector B, const float CapsuleRadius, TEnumAsByte<ECollisionChannel> CollisionChannel, bool bTraceComplex, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, bool bIgnoreSelf, FLinearColor noOverlapColor, FLinearColor overlapColor, float DrawTime) {
    return false;
}
