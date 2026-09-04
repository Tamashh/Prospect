#include "YSeasonsFunctionsLibrary.h"

UYSeasonsFunctionsLibrary::UYSeasonsFunctionsLibrary() {
}

bool UYSeasonsFunctionsLibrary::IsASeasonActive(UObject* objectContext, const FString& contextString) {
    return false;
}

bool UYSeasonsFunctionsLibrary::HasReachedMaxSeasonLevel(UObject* objectContext, const FName& seasonRowId, const FString& contextString) {
    return false;
}

bool UYSeasonsFunctionsLibrary::HasPurchasedSeasonPass(UObject* objectContext, const FString& seasonRowId, const FString& contextString) {
    return false;
}

int32 UYSeasonsFunctionsLibrary::GetPlayerSeasonLevel(UObject* objectContext, const FString& contextString) {
    return 0;
}

int32 UYSeasonsFunctionsLibrary::GetMaxSeasonLevel(UObject* objectContext, const FName& seasonRowId, const FString& contextString) {
    return 0;
}

TSoftObjectPtr<UTexture2D> UYSeasonsFunctionsLibrary::GetLogo(UObject* objectContext, const FString& contextString) {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UYSeasonsFunctionsLibrary::GetImage(UObject* objCtx, const FString& ctxString, bool useLargeImage) {
    return NULL;
}

FName UYSeasonsFunctionsLibrary::GetActiveSeasonRowId(UObject* objectContext, const FString& contextString) {
    return NAME_None;
}

bool UYSeasonsFunctionsLibrary::FindSeasonRow(const UObject* objectContext, const FName& seasonRowId, FYSeasonRow& outSeasonRow, const FString& callerContext) {
    return false;
}


