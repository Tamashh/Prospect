#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EYActivityType.h"
#include "YActivityCountEntry.h"
#include "YActivityDataTableRow.h"
#include "YActivityFunctions.generated.h"

class AActor;
class ULevel;

UCLASS(Blueprintable)
class UYActivityFunctions : public UObject {
    GENERATED_BODY()
public:
    UYActivityFunctions();

    UFUNCTION(BlueprintCallable)
    static void Sort(UPARAM(Ref) TArray<FYActivityCountEntry>& arrayToSort);
    
    UFUNCTION(BlueprintCallable)
    static void SendActivityAnalyticsEvent(AActor* Actor, EYActivityType Type, bool isSpawning, const FString& activitySubType);
    
    UFUNCTION(BlueprintCallable)
    static void RenameActor(AActor* Actor, const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInsideActivityArea(AActor* actorContext, FString& outAreaName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsActorSpawnedByArea(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorReplicatingMovement(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static FString GetStringFromActivityType(const EYActivityType& activityType);
    
    UFUNCTION(BlueprintCallable)
    static FString GetLevelName(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static ULevel* GetLevel(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDebugActivitySpawnDistanceMultiplier();
    
    UFUNCTION(BlueprintCallable)
    static float GetClosestPlayerDistanceToActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<EYActivityType> GetAllMineralActivities();
    
    UFUNCTION(BlueprintCallable)
    static EYActivityType GetActivityTypeFromString(const FString& inString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FYActivityDataTableRow GetActivityTuning(UObject* WorldContextObject, EYActivityType activityType);
    
};

