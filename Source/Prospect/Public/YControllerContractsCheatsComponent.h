#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YControllerContractsCheatsComponent.generated.h"

class AActor;
class UYControllerContractsCheatsComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYControllerContractsCheatsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYControllerContractsCheatsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerRequestPlayerActiveContracts(const FString& UserId, bool debugCall);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerDebugSetActiveContractProgress(const FString& UserId, const FString& contractId, int32 objectiveIndex, int32 newProgress);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerDebugRemoveAllActiveContracts(const FString& UserId);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerDebugGivePlayerContractRewards(const FString& UserId, const FString& contractId);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerDebugActivateContractWithPredecessor(const FString& UserId, const FString& contractId);

    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerDebugActivateContractByRowName(const FString& UserId, const FString& contractId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerContractsCheatsComponent* FindContractsCheatComponentChecked(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerContractsCheatsComponent* FindContractsCheatComponent(AActor* actorContext);
    
private:
    UFUNCTION(BlueprintCallable)
    void DebugOnPlayerRemovedAllCompletedContracts(const FString& UserId);

    UFUNCTION(BlueprintCallable)
    void DebugHandleActiveContractNewProgressReceived(const FString& UserId, const FString& activeContractId, const int32 objectiveIndex, const int32 newProgress);
    
};

