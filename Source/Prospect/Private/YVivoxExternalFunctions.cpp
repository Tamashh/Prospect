#include "YVivoxExternalFunctions.h"

UYVivoxExternalFunctions::UYVivoxExternalFunctions() {
}

bool UYVivoxExternalFunctions::SetActiveVoiceChatOutput(UObject* objectContext, const FString& outputDevice) {
    return false;
}

bool UYVivoxExternalFunctions::SetActiveVoiceChatInput(UObject* objectContext, const FString& InputDevice) {
    return false;
}

bool UYVivoxExternalFunctions::IsTransmitting(UObject* objectContext) {
    return false;
}

TArray<FString> UYVivoxExternalFunctions::FindVoiceChatAvailableOutputDevices(UObject* objectContext) {
    return TArray<FString>();
}

TArray<FString> UYVivoxExternalFunctions::FindVoiceChatAvailableInputDevices(UObject* objectContext) {
    return TArray<FString>();
}

FString UYVivoxExternalFunctions::FindActiveVoiceOutputDevice(UObject* objectContext) {
    return TEXT("");
}

FString UYVivoxExternalFunctions::FindActiveVoiceInputDevice(UObject* objectContext) {
    return TEXT("");
}


