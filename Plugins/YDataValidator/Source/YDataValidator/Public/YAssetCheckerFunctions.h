#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YAssetValidatorEntry.h"
#include "YAssetCheckerFunctions.generated.h"

class UYAssetCheckerDataAsset;

UCLASS(Blueprintable)
class YDATAVALIDATOR_API UYAssetCheckerFunctions : public UObject {
    GENERATED_BODY()
public:
    UYAssetCheckerFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindValidationEntryFromClass(UClass* InClass, FYAssetValidatorEntry& outEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYAssetCheckerDataAsset* FindDataValidationAsset();
    
};

