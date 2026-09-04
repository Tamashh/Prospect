#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DaeAmazonAWSHelper.generated.h"

UCLASS(Blueprintable)
class DAEDALICAMAZONAWSPLUGIN_API UDaeAmazonAWSHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDaeAmazonAWSHelper();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<uint8> StringToBytes(const FString& S);
    
};

