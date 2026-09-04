#include "YPlayfabInstance.h"

UYPlayfabInstance::UYPlayfabInstance() {
}

void UYPlayfabInstance::OnRequestPendingMessage(const FYPlayfabMessage& Message, EYPlayfabMessageExecutionType Type) {
}

void UYPlayfabInstance::OnRequestMessage(const FYPlayfabMessage& Message) {
}

void UYPlayfabInstance::OnPendingMessageRequestCompleted(int32 RequestID) {
}

void UYPlayfabInstance::OnNotifyMessage(const FYPlayfabMessage& Message) {
}

void UYPlayfabInstance::OnMessageProcessedSuccessfullyCallback() {
}

void UYPlayfabInstance::OnMessageErrorCallback(int32 httpErrorCode, const FString& errorMessage) {
}


