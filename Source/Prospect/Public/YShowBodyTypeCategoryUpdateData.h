#pragma once
#include "CoreMinimal.h"
#include "EYCustomizationCategory.h"
#include "YShowBodyTypeCategoryUpdateData.generated.h"

USTRUCT(BlueprintType)
struct FYShowBodyTypeCategoryUpdateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYCustomizationCategory m_requestedCategory;
    
    PROSPECT_API FYShowBodyTypeCategoryUpdateData();
};

