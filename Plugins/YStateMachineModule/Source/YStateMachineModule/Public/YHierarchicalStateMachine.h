#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YHierarchicalStateMachine.generated.h"

class UYHierarchicalStateBase;

UCLASS(Blueprintable)
class YSTATEMACHINEMODULE_API UYHierarchicalStateMachine : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UYHierarchicalStateBase*> m_stateStack;
    
public:
    UYHierarchicalStateMachine();

    UFUNCTION(BlueprintCallable)
    void RequestStateStackPop(bool removeOnlyIfMoreThenOne);
    
    UFUNCTION(BlueprintCallable)
    void RequestStateChange(UYHierarchicalStateBase* newState, bool emptyScreenStack);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStateRequestRemovalFromStack();
    
    UFUNCTION(BlueprintCallable)
    void OnStateExitDone(UYHierarchicalStateBase* exitedState);
    
    UFUNCTION(BlueprintCallable)
    void OnStateEnterPushDone(UYHierarchicalStateBase* enteredState);
    
    UFUNCTION(BlueprintCallable)
    void OnStateEnterDone(UYHierarchicalStateBase* enteredState);
    
public:
    UFUNCTION(BlueprintCallable)
    UYHierarchicalStateBase* GetStateFromStack(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumberOfStatesOnStack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UYHierarchicalStateBase* GetActiveState() const;
    
};

