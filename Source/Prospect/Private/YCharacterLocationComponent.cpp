#include "YCharacterLocationComponent.h"

UYCharacterLocationComponent::UYCharacterLocationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYCharacterLocationComponent::RemoveTag(const FName& NewRemoveTag) {
}

bool UYCharacterLocationComponent::HasTags(const TArray<FName>& Tags) const {
    return false;
}

bool UYCharacterLocationComponent::HasTag(const FName& Tag) const {
    return false;
}

bool UYCharacterLocationComponent::HasAtleastOneTag(const TArray<FName>& Tags) const {
    return false;
}

void UYCharacterLocationComponent::AddTag(const FName& newTag) {
}


