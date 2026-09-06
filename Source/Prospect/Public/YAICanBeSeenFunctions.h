#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "YAICanBeSeenFunctions.generated.h"

class AActor;

UCLASS(Blueprintable)
class UYAICanBeSeenFunctions : public UObject {
    GENERATED_BODY()
public:
    UYAICanBeSeenFunctions();

    UFUNCTION(BlueprintCallable)
    static bool CanBeSeenFromWithCapsuleOffset(const AActor* TargetActor, const FVector& observerLocation, FVector& outSeenLocation, const AActor* ignoreActor);

};

