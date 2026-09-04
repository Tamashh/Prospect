#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "YProspectAICanBeSeenFunctions.generated.h"

class AActor;

UCLASS(Blueprintable)
class UYProspectAICanBeSeenFunctions : public UObject {
    GENERATED_BODY()
public:
    UYProspectAICanBeSeenFunctions();

    UFUNCTION(BlueprintCallable)
    static bool CanBeSeenFromWithCapsuleOffset(const AActor* TargetActor, const FVector& observerLocation, FVector& outSeenLocation, const AActor* ignoreActor);
    
};

