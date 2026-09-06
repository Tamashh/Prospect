#include "YNewsFunctionLibrary.h"

UYNewsFunctionLibrary::UYNewsFunctionLibrary() {
}

bool UYNewsFunctionLibrary::IsNewsItemActiveToday(const UObject* objCtx, const FYNewsItem& newsItem) {
    return false;
}

FString UYNewsFunctionLibrary::GetNewsDataStringForLocale(const FYNewsItemLocalizedString& Data, const FString& twoLetterISOLanguageName) {
    return TEXT("");
}

FString UYNewsFunctionLibrary::GetNewsDataStringForCurrentLocale(const FYNewsItemLocalizedString& Data) {
    return TEXT("");
}

FSoftObjectPath UYNewsFunctionLibrary::GetNewsDataAssetForLocale(const FYNewsItemLocalizedAsset& Data, const FString& twoLetterISOLanguageName) {
    return FSoftObjectPath{};
}

FSoftObjectPath UYNewsFunctionLibrary::GetNewsDataAssetForCurrentLocale(const FYNewsItemLocalizedAsset& Data) {
    return FSoftObjectPath{};
}


