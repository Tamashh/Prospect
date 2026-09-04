#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YReplayMarker.h"
#include "YReplayControllerComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYReplayControllerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYReplayControllerComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void ReadInMarkers(TArray<FYReplayMarker>& outMarkers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsReplayPaused(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    bool FindReplayMarker(int32 currentReplayTimeInSeconds, bool findNextMarker, const TArray<FYReplayMarker>& sortedMarkers, FYReplayMarker& outMarker);
    
    UFUNCTION(BlueprintCallable)
    void DeleteMarker(const FString& MarkerName);
    
    UFUNCTION(BlueprintCallable)
    bool AddMarker(FYReplayMarker marker);
    
};

