#include "YPerkFunctions.h"

UYPerkFunctions::UYPerkFunctions() {
}

float UYPerkFunctions::GetRolledPerkValueFromRolledRange(const FDataTableRowHandle& rolledPerkRowHandle, float rolledRangeValue) {
    return 0.0f;
}

bool UYPerkFunctions::CreateRolledPerkRowHandle(const UObject* WorldContext, FName perkRowName, FDataTableRowHandle& outRowHandle) {
    return false;
}

bool UYPerkFunctions::CreatePerkRowHandle(const UObject* WorldContext, FName perkRowName, FDataTableRowHandle& outRowHandle) {
    return false;
}

bool UYPerkFunctions::AddRolledPerksToItem(AActor* actorContext, const FString& ItemId, const TArray<FName>& rolledPerkRowNames) {
    return false;
}

TArray<FGuid> UYPerkFunctions::AddRolledPerksDataToPerkComponent(UYPerkComponent* perkComponent, const FYStoredRolledPerksData& rolledPerksData) {
    return TArray<FGuid>();
}


