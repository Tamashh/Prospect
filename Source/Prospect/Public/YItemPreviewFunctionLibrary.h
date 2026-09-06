#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EYCustomizationMode.h"
#include "YItemPreviewFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class UYItemPreviewFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYItemPreviewFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCustomizationModeHandledByGenericSystem(EYCustomizationMode Mode);

};

