#pragma once
#include "CoreMinimal.h"
#include "EYCharacterVanityResetRequest.h"
#include "YCharacterCustomizationActor.h"
#include "YShowBodyTypeCategoryUpdateData.h"
#include "YCharacterCustomizationPlayerActor.generated.h"

UCLASS(Blueprintable)
class AYCharacterCustomizationPlayerActor : public AYCharacterCustomizationActor {
    GENERATED_BODY()
public:
    AYCharacterCustomizationPlayerActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnShowCustomizationCategory(FYShowBodyTypeCategoryUpdateData customizationCategory);
    
    UFUNCTION(BlueprintCallable)
    void OnResetRequest(EYCharacterVanityResetRequest Request);
    
};

