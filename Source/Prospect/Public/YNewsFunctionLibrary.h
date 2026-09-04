#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "YNewsItemLocalizedString.h"
#include "YNewsFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class UYNewsFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYNewsFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetNewsDataStringForLocale(const FYNewsItemLocalizedString& Data, const FString& twoLetterISOLanguageName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetNewsDataStringForCurrentLocale(const FYNewsItemLocalizedString& Data);
    
};

