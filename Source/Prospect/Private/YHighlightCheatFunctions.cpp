#include "YHighlightCheatFunctions.h"

UYHighlightCheatFunctions::UYHighlightCheatFunctions() {
}

void UYHighlightCheatFunctions::DumpDebugHighlightState(AActor* actorContext) {
}

void UYHighlightCheatFunctions::DebugRemoveHighlightItemType(AActor* actorContext, TArray<EYItemType> ItemType) {
}

void UYHighlightCheatFunctions::DebugNotifyArrayIndex(AActor* actorContext, int32 Index) {
}

void UYHighlightCheatFunctions::DebugHighlightItemType(AActor* actorContext, TArray<EYItemType> ItemType) {
}

FGuid UYHighlightCheatFunctions::DebugHighlightItemStringId(AActor* actorContext, const FString& ID, bool State) {
    return FGuid{};
}

FGuid UYHighlightCheatFunctions::DebugHighlightItemRowId(AActor* actorContext, const FString& ID, bool State) {
    return FGuid{};
}

void UYHighlightCheatFunctions::DebugClearHighlighting(AActor* actorContext) {
}


