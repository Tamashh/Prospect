#include "YMapInfoComponent.h"

UYMapInfoComponent::UYMapInfoComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

EYMapType UYMapInfoComponent::GetMapType(const FString& contextString) const {
    return EYMapType::None;
}

EYMapType UYMapInfoComponent::FindMapType(UObject* contextObject, const FString& contextString) {
    return EYMapType::None;
}


