#include "YActivityComponent.h"

UYActivityComponent::UYActivityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_destroySkeletalMeshesOnDedicatedServer = false;
    this->m_isPlacedInWorld = false;
    this->m_activityActorManager = NULL;
    this->m_registerComponent = NULL;
    this->m_activityLocation = NULL;
    this->m_isMarkedAsDepleted = false;
}

void UYActivityComponent::SetupActivityComponent(AYActivityActorManager* Activity, AYActivityLocation* activityLocation, UYActivityRegisterComponent* registerOverride) {
}

void UYActivityComponent::MarkActivityActorAsDepleted() {
}

EYActivityType UYActivityComponent::GetActivityType() {
    return EYActivityType::None;
}

AYActivityLocation* UYActivityComponent::GetActivityLocation() {
    return NULL;
}

AYActivityActorManager* UYActivityComponent::GetActivity() {
    return NULL;
}


