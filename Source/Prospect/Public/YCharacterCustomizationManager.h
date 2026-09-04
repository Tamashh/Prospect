#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YCharacterCustomizationManager.generated.h"

class UYCharacterCustomizationModel;

UCLASS(Blueprintable)
class UYCharacterCustomizationManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UYCharacterCustomizationModel*> m_models;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYCharacterCustomizationModel* m_baseModel;
    
    UYCharacterCustomizationManager();

};

