#pragma once
#include "CoreMinimal.h"
#include "EYCustomizationCategory.h"
#include "UObject/Interface.h"
#include "YCustomizationActorInterface.generated.h"

class UAnimMontage;

UINTERFACE(Blueprintable, MinimalAPI)
class UYCustomizationActorInterface : public UInterface {
    GENERATED_BODY()
};

class IYCustomizationActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOnCustomizationCategoryChanged(EYCustomizationCategory newCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PlayCustomizationMontage(UAnimMontage* Montage, EYCustomizationCategory Category);
    
};

