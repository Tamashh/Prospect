#pragma once
#include "CoreMinimal.h"
#include "YCustomizationMaterialAssociation.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FYCustomizationMaterialAssociation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* m_materialInterface;

    PROSPECT_API FYCustomizationMaterialAssociation();
};
