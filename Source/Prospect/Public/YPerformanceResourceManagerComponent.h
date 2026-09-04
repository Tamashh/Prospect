#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YResourceExecutionInterface.h"
#include "YResourceSpawnActorRequest.h"
#include "YPerformanceResourceManagerComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYPerformanceResourceManagerComponent : public UActorComponent, public IYResourceExecutionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FYResourceSpawnActorRequest> m_spawnRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FYResourceSpawnActorRequest> m_finishedLoadResourceClass;
    
public:
    UYPerformanceResourceManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static bool RequestExecutionHandles(UObject* objectContext, int32 Amount, TArray<int32>& outHandles);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnFinishedSpawnRequest(int32 Handle);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ExecuteSpawnActor(UObject* WorldContext, const FYResourceSpawnActorRequest& requestData);
    

    // Fix for true pure virtual functions not being implemented
};

