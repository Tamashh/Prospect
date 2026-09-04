#include "YRarityFunctions.h"

UYRarityFunctions::UYRarityFunctions() {
}

bool UYRarityFunctions::RarityIsNotValid(EYItemRarityType itemRarity) {
    return false;
}

bool UYRarityFunctions::IsValidRarity(EYItemRarityType rarity) {
    return false;
}

bool UYRarityFunctions::IsAbleToUpgradeItem(AActor* actorCtx, const FString& ItemId, FString& playerMessage) {
    return false;
}

bool UYRarityFunctions::IsAbleToTuneWeapon(AActor* actorCtx, const FString& ItemId, FString& playerMessage) {
    return false;
}

bool UYRarityFunctions::FindRarityVisualizationForType(const UObject* objCtx, EYItemRarityType Type, FYRarityVisualizationData& outVisualizationData) {
    return false;
}

FColor UYRarityFunctions::FindRarityColor(UObject* WorldContext, EYItemRarityType Type) {
    return FColor{};
}

EYItemRarityType UYRarityFunctions::FindNextDesirableLevelFromRarityTypes(EYItemRarityType fromRarity, bool Positive, const TMap<EYItemRarityType, FYLevelItemEntry>& m_rarityTypes) {
    return EYItemRarityType::Invalid;
}

EYItemRarityType UYRarityFunctions::FindNextDesirableLevel(EYItemRarityType fromRarity, bool Positive) {
    return EYItemRarityType::Invalid;
}

bool UYRarityFunctions::FindItemUpgradeRecipe(AActor* actorCtx, const FString& ItemId, FYItemRecipe& outItemUpgradeRecipe) {
    return false;
}

bool UYRarityFunctions::FindItemUpgradeCurrencyCost(AActor* actorCtx, const FString& ItemId, int32& outCurrencyCost) {
    return false;
}

bool UYRarityFunctions::FindCurrentLevelEntryFromId(AActor* actorContext, const FString& ItemId, FYLevelItemEntry& outEntry) {
    return false;
}

EYItemRarityType UYRarityFunctions::FindCurrentItemRarity(AActor* actorContext, const FString& ItemId) {
    return EYItemRarityType::Invalid;
}

FText UYRarityFunctions::ConvertItemRarityEnumToString(EYItemRarityType itemRarity, const FString& contextString) {
    return FText::GetEmpty();
}


