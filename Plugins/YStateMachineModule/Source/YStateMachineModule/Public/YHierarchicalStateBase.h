#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YHierarchicalStateBase.generated.h"

class UYHierarchicalStateBase;

UCLASS(Blueprintable)
class YSTATEMACHINEMODULE_API UYHierarchicalStateBase : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStateExitTransitionDoneSignature, UYHierarchicalStateBase*, exitedState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStateEnterTransitionDoneSignature, UYHierarchicalStateBase*, enteredState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRequestStatePopSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRequestStateChangeSignature, UYHierarchicalStateBase*, newState, bool, emptyStack);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestStateChangeSignature RequestStateChangeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestStatePopSignature RequestStatePopDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateExitTransitionDoneSignature StateExitedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateEnterTransitionDoneSignature StateEnteredDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_pushOnStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_currentlyActive;
    
public:
    UYHierarchicalStateBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateExitedEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateEnteredEvent();
    
};

