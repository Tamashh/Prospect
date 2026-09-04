#pragma once
#include "CoreMinimal.h"
#include "YFXCategoryMaterialFloatParemeterEntry.generated.h"

USTRUCT(BlueprintType)
struct FYFXCategoryMaterialFloatParemeterEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_floatParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_name;
    
    PROSPECT_API FYFXCategoryMaterialFloatParemeterEntry();
};

