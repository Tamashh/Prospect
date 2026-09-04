#include "YCharacterCustomizationRuntimeFunctions.h"

UYCharacterCustomizationRuntimeFunctions::UYCharacterCustomizationRuntimeFunctions() {
}

void UYCharacterCustomizationRuntimeFunctions::SetPreviewCustomizationActorFromArcheTypeId(const UObject* objCtx, const FDataTableRowHandle& rowHandle) {
}

void UYCharacterCustomizationRuntimeFunctions::SetPreviewCustomizationActorFromActiveCustomizationData(const UObject* objCtx, const FYActiveCustomizationData& Data) {
}

FYActiveGlobalRuntimeVanityData UYCharacterCustomizationRuntimeFunctions::FindRelevantVanityItemsCustomization(AActor* relevantActor) {
    return FYActiveGlobalRuntimeVanityData{};
}

bool UYCharacterCustomizationRuntimeFunctions::FindEquippedPartForCategory(EYCustomizationCategory categoryType, AActor* actorContext, FYCharacterCustomizationBodyPart& outData) {
    return false;
}

FText UYCharacterCustomizationRuntimeFunctions::FindCustomizationCategoryNameFromID(const UObject* objectContext, const FDataTableRowHandle& rowHandle) {
    return FText::GetEmpty();
}

EYCustomizationBodyType UYCharacterCustomizationRuntimeFunctions::FindBodyType(AActor* actorContext) {
    return EYCustomizationBodyType::INVALID;
}

FYActiveCustomizationData UYCharacterCustomizationRuntimeFunctions::FindActiveCustomizationData(AActor* actorContext) {
    return FYActiveCustomizationData{};
}

FName UYCharacterCustomizationRuntimeFunctions::FindActiveArchetypeId(AActor* actorContext) {
    return NAME_None;
}

UAnimMontage* UYCharacterCustomizationRuntimeFunctions::FindActiveAnimationForCategory(EYCustomizationCategory Category, AActor* activeActor) {
    return NULL;
}


