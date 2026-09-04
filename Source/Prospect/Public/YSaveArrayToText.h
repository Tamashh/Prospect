#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "YSaveArrayToText.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYSaveArrayToText : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYSaveArrayToText();

private:
    UFUNCTION(BlueprintCallable)
    static bool SaveArrayText(const FString& SaveDirectory, const FString& Filename, TArray<FString> SaveText, bool AllowOverWriting);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadText(const FString& FilenameA, const FString& Filename, FString& SaveTextA);
    
};

