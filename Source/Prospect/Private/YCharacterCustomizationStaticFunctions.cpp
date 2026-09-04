#include "YCharacterCustomizationStaticFunctions.h"

UYCharacterCustomizationStaticFunctions::UYCharacterCustomizationStaticFunctions() {
}

bool UYCharacterCustomizationStaticFunctions::IsItemCompatibleWithArchetypeBodytype(const UObject* objCtx, FName archetypeId, const FDataTableRowHandle& rowHandle) {
    return false;
}

bool UYCharacterCustomizationStaticFunctions::FindDefaultCharacterCustomizationData(const UObject* objCtx, FYCharacterCustomizationDefaultDataRow& outData) {
    return false;
}

TSoftObjectPtr<UTexture2D> UYCharacterCustomizationStaticFunctions::FindCustomizationImageFromBodyPart(FYCharacterCustomizationBodyPart part) {
    return NULL;
}

bool UYCharacterCustomizationStaticFunctions::FindCompatibleItemsForCategory(const UObject* objCtx, const TArray<EYCustomizationCategory>& Categories, FName archetypeId, TArray<FYVanityItemData>& outRowHandles, EYCustomizationBodyType bodyType) {
    return false;
}

bool UYCharacterCustomizationStaticFunctions::FindCompatibleItemsForArchetypeCategory(const UObject* objCtx, const TArray<EYCustomizationCategory>& Categories, FName archetypeId, TArray<FYVanityItemData>& outVanityItems) {
    return false;
}

FText UYCharacterCustomizationStaticFunctions::FindCategoryCustomizationNameFromCategory(UObject* objectContext, EYCustomizationCategory Category) {
    return FText::GetEmpty();
}

bool UYCharacterCustomizationStaticFunctions::FindBodyPartFromCategory(const UObject* objCtx, EYCustomizationCategory customizationCategory, const TArray<FYCharacterCustomizationBodyPart>& Data, FYCharacterCustomizationBodyPart& outHandle) {
    return false;
}

bool UYCharacterCustomizationStaticFunctions::FindArchetypeRefRowGivenId(const UObject* objCtx, FName archetypeId, FYCharacterCustomizationArchetypeRow& outRow) {
    return false;
}

UAnimMontage* UYCharacterCustomizationStaticFunctions::FindAnimationFromCharacterRowHandle(const FDataTableRowHandle& baseRowHandle) {
    return NULL;
}

bool UYCharacterCustomizationStaticFunctions::CalculateRandomCustomizationData(const UObject* objCtx, FYActiveCustomizationData& outData) {
    return false;
}


