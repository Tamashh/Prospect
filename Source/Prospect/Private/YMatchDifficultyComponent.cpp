#include "YMatchDifficultyComponent.h"

UYMatchDifficultyComponent::UYMatchDifficultyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_currentDifficultyLevel = 0;
}

void UYMatchDifficultyComponent::SetDifficultyLevel(int32 Level) {
}

UYMatchDifficultyComponent* UYMatchDifficultyComponent::GetMatchDifficultyComponent(UObject* WorldContextObject) {
    return NULL;
}

int32 UYMatchDifficultyComponent::GetCurrentDifficultyLevel(UObject* WorldContextObject) {
    return 0;
}


