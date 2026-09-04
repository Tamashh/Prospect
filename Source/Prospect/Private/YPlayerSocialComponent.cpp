#include "YPlayerSocialComponent.h"

UYPlayerSocialComponent::UYPlayerSocialComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_socialActorPingableRadius = 250.0f;
    this->m_socialActorClass = NULL;
    this->m_traceChannel = ECC_WorldStatic;
}

void UYPlayerSocialComponent::StartSocialInput() {
}

void UYPlayerSocialComponent::ServerHandlePingSocialActor_Implementation(AYSocialActor* socialActor) {
}
bool UYPlayerSocialComponent::ServerHandlePingSocialActor_Validate(AYSocialActor* socialActor) {
    return true;
}

void UYPlayerSocialComponent::ServerDoSocialAction_Implementation(FVector_NetQuantize traceLocation, FVector traceDirection, FDataTableRowHandle commWheelEntry) {
}
bool UYPlayerSocialComponent::ServerDoSocialAction_Validate(FVector_NetQuantize traceLocation, FVector traceDirection, FDataTableRowHandle commWheelEntry) {
    return true;
}

void UYPlayerSocialComponent::ServerDoMapSocialAction_Implementation(UYMapMarkerData* mapMarkerData) {
}
bool UYPlayerSocialComponent::ServerDoMapSocialAction_Validate(UYMapMarkerData* mapMarkerData) {
    return true;
}

void UYPlayerSocialComponent::ReleaseSocialInput_GoThere() {
}

void UYPlayerSocialComponent::ReleaseSocialInput_Enemies() {
}

void UYPlayerSocialComponent::ReleaseSocialInput() {
}

void UYPlayerSocialComponent::OnQuickMatchInfoToggled(bool IsVisible) {
}

void UYPlayerSocialComponent::OnCompleteSingleClickTimer() {
}

void UYPlayerSocialComponent::DoSocialActionWithTraceInfo(FVector traceLocation, FVector traceDirection, FDataTableRowHandle commWheelEntry) {
}

void UYPlayerSocialComponent::DoMapSocialAction(UYMapMarkerData* mapMarkerData) {
}


