#include "YStatsItemFunctions.h"

UYStatsItemFunctions::UYStatsItemFunctions() {
}

FText UYStatsItemFunctions::FindTextFromStatsType(EYItemStatsType Type) {
    return FText::GetEmpty();
}

bool UYStatsItemFunctions::FindStatsTypeFromAttribute(EYGameplayAttribute Attribute, TArray<EYItemStatsType>& outTypes) {
    return false;
}

bool UYStatsItemFunctions::FindStatsDefinition(EYItemStatsCategory statsCategory, EYItemStatsType Type, FYItemStatsAssociationEntry& OutResult) {
    return false;
}

EYItemStatsCategory UYStatsItemFunctions::FindStatsCategoryFromRowHandle(FDataTableRowHandle rowHandle) {
    return EYItemStatsCategory::None;
}

bool UYStatsItemFunctions::FindStatsAssociationCollectionFromCategory(EYItemStatsCategory statsCategory, FYItemStatsAssociationCollection& OutResult) {
    return false;
}

FYStatsTypeDataEntry UYStatsItemFunctions::FindItemStatTypeFromRowHandle(FDataTableRowHandle baseItemRowHandle, EYItemStatsType Type, const TArray<FDataTableRowHandle>& rowHandles, const TArray<FYGameplayAttributeModifier>& attributeModifiers) {
    return FYStatsTypeDataEntry{};
}

EYItemStatsCategory UYStatsItemFunctions::FindItemStatsCategoryFromItemType(EYItemType Type, const FDataTableRowHandle& rowHandle) {
    return EYItemStatsCategory::None;
}

AActor* UYStatsItemFunctions::FindCDOActorFromImpactActor(FDataTableRowHandle rowHandle) {
    return NULL;
}


