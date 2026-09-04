#include "YFactionFunctionsLibrary.h"

UYFactionFunctionsLibrary::UYFactionFunctionsLibrary() {
}

bool UYFactionFunctionsLibrary::ShouldShowFactionLevelInShop(UObject* objectContext, const FString& factionRowId, const FString& contextString) {
    return false;
}

UMaterialInterface* UYFactionFunctionsLibrary::GetVendorIcon(UObject* objectContext, const FString& factionRowId, const FString& contextString) {
    return NULL;
}

FText UYFactionFunctionsLibrary::GetRewardDescription(UObject* objectContext, const FString& factionRowId, const FString& contextString) {
    return FText::GetEmpty();
}

FText UYFactionFunctionsLibrary::GetName(UObject* objectContext, const FString& factionRowId, const FString& contextString) {
    return FText::GetEmpty();
}

FText UYFactionFunctionsLibrary::GetLeaderTitle(UObject* objectContext, const FString& factionRowId, const FString& contextString) {
    return FText::GetEmpty();
}

FText UYFactionFunctionsLibrary::GetLeaderName(UObject* objectContext, const FString& factionRowId, const FString& contextString) {
    return FText::GetEmpty();
}

FText UYFactionFunctionsLibrary::GetHeadline(UObject* objectContext, const FString& factionRowId, const FString& contextString) {
    return FText::GetEmpty();
}

FYFactionsDataTableRow UYFactionFunctionsLibrary::GetFactionStaticData(UObject* objectContext, const FString& factionRowId, const FString& contextString) {
    return FYFactionsDataTableRow{};
}

TSoftObjectPtr<UTexture2D> UYFactionFunctionsLibrary::GetFactionSmallIcon(UObject* objectContext, const FString& factionRowId, const FString& contextString) {
    return NULL;
}

bool UYFactionFunctionsLibrary::GetFactionProgressSum(const AYPlayerState* PlayerState, int32& reputation, int32& Level, TArray<FYFactionProgress>& allFactionProgress) {
    return false;
}

TSoftObjectPtr<UTexture2D> UYFactionFunctionsLibrary::GetFactionIconLarge(UObject* objectContext, const FString& factionRowId, const FString& contextString) {
    return NULL;
}

FText UYFactionFunctionsLibrary::GetDetailedDescription(UObject* objectContext, const FString& factionRowId, const FString& contextString) {
    return FText::GetEmpty();
}

FText UYFactionFunctionsLibrary::GetDescription(UObject* objectContext, const FString& factionRowId, const FString& contextString) {
    return FText::GetEmpty();
}

TSoftObjectPtr<UTexture2D> UYFactionFunctionsLibrary::GetAltVendorIcon(UObject* objectContext, const FString& factionRowId, const FString& contextString) {
    return NULL;
}


