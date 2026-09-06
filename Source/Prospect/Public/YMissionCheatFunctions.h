#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YMissionCheatFunctions.generated.h"

class AActor;

UCLASS(Blueprintable)
class UYMissionCheatFunctions : public UObject {
    GENERATED_BODY()
public:
    UYMissionCheatFunctions();

    UFUNCTION(BlueprintCallable)
    static void DebugSetCompletedMissionIds(AActor* actorContext, const TArray<FString>& completedMissionIds);

    UFUNCTION(BlueprintCallable)
    static void DebugSetActiveOnboardingMission(AActor* actorContext, const FString& missionId, int32 stepId);
    
    UFUNCTION(BlueprintCallable)
    static void DebugResetOnboardingProgress(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable)
    static void DebugIncrementMissionStep(AActor* actorContext, bool Positive);
    
};

