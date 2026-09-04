#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "YToolsBPLibrary.generated.h"

UCLASS(Blueprintable)
class UYToolsBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYToolsBPLibrary();

    UFUNCTION(BlueprintCallable)
    static bool TestFileWriter(const FString& FolderName, const FString& Filename, const FString& BaseStringToSave, int32 Iterations, float Delay);
    
};

