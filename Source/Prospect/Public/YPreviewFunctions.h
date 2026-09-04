#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EYCustomizationMode.h"
#include "YPreviewFunctions.generated.h"

UCLASS(Blueprintable)
class UYPreviewFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYPreviewFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCustomizationModeHandledByGenericSystem(EYCustomizationMode Mode);
    
};

