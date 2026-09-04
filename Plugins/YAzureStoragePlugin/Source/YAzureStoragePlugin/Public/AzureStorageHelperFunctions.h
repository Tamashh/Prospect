#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AzureStorageHelperFunctions.generated.h"

UCLASS(Blueprintable)
class YAZURESTORAGEPLUGIN_API UAzureStorageHelperFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAzureStorageHelperFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<uint8> StringToBytes(const FString& S);
    
};

