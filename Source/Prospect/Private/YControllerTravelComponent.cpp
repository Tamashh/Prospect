#include "YControllerTravelComponent.h"

UYControllerTravelComponent::UYControllerTravelComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_currentTravelState = EYTravelState::None;
    this->m_requestScreenChangeOnLogin = true;
    this->m_requestedMatchConnection = false;
}

void UYControllerTravelComponent::WaitingForMatchmakingSignalREventTimedOut() {
}

void UYControllerTravelComponent::TryTravelToSession(const FString& SessionId, int32 retryCounter, bool isReconnect) {
}

void UYControllerTravelComponent::ServerRequestTravel_Implementation(const FYTravelRequestData& Data) {
}

void UYControllerTravelComponent::OnTimeoutRequestSingleplayerStation() {
}

void UYControllerTravelComponent::OnPingTypeComplete(EYServicePingTypes Type) {
}

void UYControllerTravelComponent::OnNetworkFailure(UWorld* InWorld, UNetDriver* NetDriver, TEnumAsByte<ENetworkFailure::Type> FailureType, const FString& errorString) {
}

void UYControllerTravelComponent::OnMatchMakingResultReceived(EYTravelInstanceType Type, const FYAzureFunctionResult& azureResult) {
}

EYTravelState UYControllerTravelComponent::FindCurrentTravelState(UObject* objCtx) {
    return EYTravelState::None;
}

bool UYControllerTravelComponent::ExecuteTravel(UObject* objCtx, const FYTravelRequestData& Data) {
    return false;
}

void UYControllerTravelComponent::ClientRequestTravel_Implementation(const FYTravelRequestData& Data) {
}


