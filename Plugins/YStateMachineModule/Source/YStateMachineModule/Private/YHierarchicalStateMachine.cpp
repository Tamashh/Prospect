#include "YHierarchicalStateMachine.h"

UYHierarchicalStateMachine::UYHierarchicalStateMachine() {
}

void UYHierarchicalStateMachine::RequestStateStackPop(bool removeOnlyIfMoreThenOne) {
}

void UYHierarchicalStateMachine::RequestStateChange(UYHierarchicalStateBase* newState, bool emptyScreenStack) {
}

void UYHierarchicalStateMachine::OnStateRequestRemovalFromStack() {
}

void UYHierarchicalStateMachine::OnStateExitDone(UYHierarchicalStateBase* exitedState) {
}

void UYHierarchicalStateMachine::OnStateEnterPushDone(UYHierarchicalStateBase* enteredState) {
}

void UYHierarchicalStateMachine::OnStateEnterDone(UYHierarchicalStateBase* enteredState) {
}

UYHierarchicalStateBase* UYHierarchicalStateMachine::GetStateFromStack(int32 Index) const {
    return NULL;
}

int32 UYHierarchicalStateMachine::GetNumberOfStatesOnStack() const {
    return 0;
}

UYHierarchicalStateBase* UYHierarchicalStateMachine::GetActiveState() const {
    return NULL;
}


