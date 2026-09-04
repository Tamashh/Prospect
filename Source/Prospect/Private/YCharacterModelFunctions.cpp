#include "YCharacterModelFunctions.h"

UYCharacterModelFunctions::UYCharacterModelFunctions() {
}

void UYCharacterModelFunctions::TryUpdateCustomizationPreviewForCategoriesAndVanityItems(const UObject* objCtx, const FDataTableRowHandle& previewedItemRowHandle, const TArray<FDataTableRowHandle>& vanityRows, TSet<EYCustomizationCategory> customizationCategories) {
}

bool UYCharacterModelFunctions::ResetCharacterCustomizationCategoryToPersistent(const UObject* objCtx, const FString& UserId, EYCustomizationCategory Category) {
    return false;
}

bool UYCharacterModelFunctions::IsPersistentAndPendingStorageEqualForLocal(const UObject* objCtx) {
    return false;
}

bool UYCharacterModelFunctions::IsPersistentAndPendingStorageEqual(const UObject* objCtx, const FString& UserId) {
    return false;
}

bool UYCharacterModelFunctions::IsPendingStorageOwned(UObject* objCtx) {
    return false;
}

bool UYCharacterModelFunctions::IsFullSuitEquipped(const UObject* objCtx, EYCustomizationModelType customizationModelType) {
    return false;
}

bool UYCharacterModelFunctions::IsCharacterModelItemEquipped(const UObject* objCtx, const FString& UserId, FYVanityItemData& vanityItem, EYCustomizationModelType modelType) {
    return false;
}

FName UYCharacterModelFunctions::FindModelSelectedArchetype(const UObject* objCtx, EYCustomizationModelType modelType) {
    return NAME_None;
}

UYCharacterCustomizationModel* UYCharacterModelFunctions::FindLocalCharacterCustomizationModel(const UObject* objCtx) {
    return NULL;
}


