#pragma once
#include "CoreMinimal.h"
#include "YMissionProgressionUpdated.h"
#include "Components/ActorComponent.h"
#include "YControllerBackendMissionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYControllerBackendMissionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYControllerBackendMissionComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void RetryInitializeMissionData();
    
    UFUNCTION(BlueprintCallable)
    void OnMissionRequestFailed();
    
    UFUNCTION(BlueprintCallable)
    void OnMissionDataUpdated(const FYMissionProgressionUpdated& Data);
    
private:
    UFUNCTION(BlueprintCallable)
    void CompletedMissionIdsUpdated(const TArray<FString>& completedMissionIds);

};

