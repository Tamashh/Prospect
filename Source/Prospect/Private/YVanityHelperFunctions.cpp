#include "YVanityHelperFunctions.h"

UYVanityHelperFunctions::UYVanityHelperFunctions() {
}

void UYVanityHelperFunctions::RetrieveVanityOptionsFor(const UObject* WorldContext, const FName& ItemId, const EYVanityType vanityType, TArray<FYVanityItemRowBase>& outVanityOptions) {
}

void UYVanityHelperFunctions::ResetGlobalVanityTemporaryDataToPersistent(const UObject* objCtx) {
}

bool UYVanityHelperFunctions::RequestVanityUpdate(AActor* actorContext, FDataTableRowHandle rowHandle, int32 currentSelectedSlot, EYVanityType vanityType, EYCustomizationModelType customizationType) {
    return false;
}

bool UYVanityHelperFunctions::IsVanityRowHandleValidForItem(FName weaponRowName, FDataTableRowHandle vanityRowHandle, bool onlyExclusiveOptions) {
    return false;
}

bool UYVanityHelperFunctions::IsVanityItemOwnedOrFromRetentionBonus(UObject* WorldContextObject, FName ItemId) {
    return false;
}

bool UYVanityHelperFunctions::IsVanityItemInsidePlayerInventory(UObject* WorldContextObject, FName ItemId) {
    return false;
}

bool UYVanityHelperFunctions::IsVanityItemFullSuit(UObject* WorldContextObject, FName vanityItemRowName) {
    return false;
}

bool UYVanityHelperFunctions::IsVanityDefaultEntry(const UObject* WorldContext, const FString& vanityId, FName relateableId) {
    return false;
}

bool UYVanityHelperFunctions::IsRowHandlePrimaryVanity(const FDataTableRowHandle& rowHandle) {
    return false;
}

bool UYVanityHelperFunctions::IsPersistentAndPendingGlobalVanitySelectionEqual(const UObject* objCtx) {
    return false;
}

bool UYVanityHelperFunctions::IsOwnedVanity(UObject* WorldContextObject, FName ItemId) {
    return false;
}

void UYVanityHelperFunctions::GetSeperatedVanityEntries(const TArray<FDataTableRowHandle>& vanityRowHandles, FDataTableRowHandle& primaryVanityId, FDataTableRowHandle& secondaryVanityId) {
}

bool UYVanityHelperFunctions::FindWeaponRowByVanityType(const TArray<FDataTableRowHandle>& vanityEntries, FYWeaponVanityRow& weaponVanityRow) {
    return false;
}

FText UYVanityHelperFunctions::FindVanityItemName(const FDataTableRowHandle& rowHandle) {
    return FText::GetEmpty();
}

TSoftClassPtr<AActor> UYVanityHelperFunctions::FindVanityActorFromHandle(AActor* actorContext, FDataTableRowHandle rowHandle) {
    return NULL;
}

void UYVanityHelperFunctions::FindItemsUsingVanityItem(UObject* WorldContextObject, FName vanityItemRowName, TArray<FYItemUsingVanityInfo>& outItems) {
}

FText UYVanityHelperFunctions::FindExplanationApperenceCategory(AActor* relevantActor, EYApperenceCategoriesTypes Category) {
    return FText::GetEmpty();
}

bool UYVanityHelperFunctions::FindEquippedGlobalVanityRowHandleById(const FYActiveGlobalRuntimeVanityData& vanityData, FName ItemId, FDataTableRowHandle& outRowHandle, int32& OutIndex) {
    return false;
}

void UYVanityHelperFunctions::FindCharacterCustomizationRowHandleFromData(FYActiveGlobalRuntimeVanityData vanityData, EYVanityType vanityType, int32 slotId, FDataTableRowHandle& outRowHandle) {
}

void UYVanityHelperFunctions::FindCharacterCustomizationRowHandleFromActor(AActor* relevantActor, EYVanityType vanityType, FDataTableRowHandle& outRowHandle) {
}

UAnimMontage* UYVanityHelperFunctions::FindActiveAnimationFromDataGivenType(FYActiveGlobalRuntimeVanityData vanityData, EYVanityType vanityType, int32 slotId) {
    return NULL;
}

UAnimMontage* UYVanityHelperFunctions::FindActiveAnimationForActorGivenType(AActor* relevantActor, EYVanityType vanityType) {
    return NULL;
}

void UYVanityHelperFunctions::ApplyVanityEntriesOnActor(AActor* relevantActor, TArray<FDataTableRowHandle> vanityEntries) {
}

void UYVanityHelperFunctions::ApplyGenericVanityMaterialOnMesh(UMaterialInstance* materialWithParameterOverrides, UMeshComponent* MeshComponent) {
}

void UYVanityHelperFunctions::AddVanityToWeapon(AActor* actorContext, const FString& weaponItemId, const TArray<FDataTableRowHandle>& vanityIds) {
}


