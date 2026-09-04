#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YStringExternalFunctions.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYStringExternalFunctions : public UObject {
    GENERATED_BODY()
public:
    UYStringExternalFunctions();

    UFUNCTION(BlueprintCallable)
    static bool ValidateAlphaNumericString(const FString& StringToValidate);
    
    UFUNCTION(BlueprintCallable)
    static void SortStringArrayAlphabetically(UPARAM(Ref) TArray<FString>& StringArray);
    
    UFUNCTION(BlueprintCallable)
    static FString ReplaceAllSpecialCharacterWithString(const FString& StringToValidate, const FString& ReplacementString);
    
    UFUNCTION(BlueprintCallable)
    static bool CompareStringsLessThan(const FString& stringA, const FString& stringB);
    
    UFUNCTION(BlueprintCallable)
    static bool CompareStringsGreaterThan(const FString& stringA, const FString& stringB);
    
    UFUNCTION(BlueprintCallable)
    static bool CompareSringsLessThan(const FString& stringA, const FString& stringB);
    
    UFUNCTION(BlueprintCallable)
    static bool CompareSringsGreaterThan(const FString& stringA, const FString& stringB);
    
    UFUNCTION(BlueprintCallable)
    static FString ArrayToString(const TArray<FString>& arrayOfStrings);
    
};

