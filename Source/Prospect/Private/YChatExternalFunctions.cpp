#include "YChatExternalFunctions.h"

UYChatExternalFunctions::UYChatExternalFunctions() {
}

bool UYChatExternalFunctions::IsUserMuted(const FString& UserId, bool isVoice) {
    return false;
}

bool UYChatExternalFunctions::IsPlayerNameMuted(AActor* actorContext, const FString& playerName, bool isVoice) {
    return false;
}

FText UYChatExternalFunctions::ChannelTypeToText(UObject* objectContext, EYChannelType ChannelType) {
    return FText::GetEmpty();
}


