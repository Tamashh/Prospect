#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/SoftObjectPath.h"
#include "YNewsItem.h"
#include "YNewsItemLocalizedAsset.h"
#include "YNewsItemLocalizedString.h"
#include "YNewsFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class UYNewsFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYNewsFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNewsItemActiveToday(const UObject* objCtx, const FYNewsItem& newsItem);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetNewsDataStringForLocale(const FYNewsItemLocalizedString& Data, const FString& twoLetterISOLanguageName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetNewsDataStringForCurrentLocale(const FYNewsItemLocalizedString& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSoftObjectPath GetNewsDataAssetForLocale(const FYNewsItemLocalizedAsset& Data, const FString& twoLetterISOLanguageName);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSoftObjectPath GetNewsDataAssetForCurrentLocale(const FYNewsItemLocalizedAsset& Data);

};

