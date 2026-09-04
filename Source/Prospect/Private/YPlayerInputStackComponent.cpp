#include "YPlayerInputStackComponent.h"

UYPlayerInputStackComponent::UYPlayerInputStackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UYPlayerInputStackComponent::RemoveInputWidget(UObject* objectContext, UWidget* widgetToDeactivate, const FString& Context) {
    return false;
}

bool UYPlayerInputStackComponent::RemoveHighestInputStack(UObject* objectContext) {
    return false;
}

bool UYPlayerInputStackComponent::RegisterNewStackContext(UObject* objectContext, EYInputUIStackType stackType, FYInputStackRuntimeContext StackContext) {
    return false;
}

bool UYPlayerInputStackComponent::IsStackRowHighestActive(UObject* objectContext, FDataTableRowHandle rowHandle) {
    return false;
}

bool UYPlayerInputStackComponent::IsStackRowActive(UObject* objectContext, FDataTableRowHandle rowHandle) {
    return false;
}

bool UYPlayerInputStackComponent::IsStackInputActive(UObject* objectContext, EYInputUIStackType stackType) {
    return false;
}

bool UYPlayerInputStackComponent::IsHighestStackActive(UObject* objectContext, EYInputUIStackType stack) {
    return false;
}

bool UYPlayerInputStackComponent::IsAnyStackActive(UObject* objectContext) {
    return false;
}

bool UYPlayerInputStackComponent::ClearAllStacks(UObject* objectContext) {
    return false;
}


