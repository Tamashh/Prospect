#pragma once
#include "CoreMinimal.h"
#include "EYCustomizationBodyType.h"
#include "UObject/Object.h"
#include "YOnUpdatedOwnedArchetypesDelegate.h"
#include "YCharacterCustomizationArchetypeFunctions.generated.h"

UCLASS(Blueprintable)
class UYCharacterCustomizationArchetypeFunctions : public UObject {
    GENERATED_BODY()
public:
    UYCharacterCustomizationArchetypeFunctions();

    UFUNCTION(BlueprintCallable)
    static void UpdateOwnedArchetypes(const UObject* objCtx, FYOnUpdatedOwnedArchetypes Delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EYCustomizationBodyType FindBodyTypeGivenArchetypeID(const UObject* objCtx, FName archetypeId);
    
};

