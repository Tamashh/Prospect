#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YFXCategoryMaterialParemeterEntry.generated.h"

USTRUCT(BlueprintType)
struct FYFXCategoryMaterialParemeterEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vectorParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_name;
    
    PROSPECT_API FYFXCategoryMaterialParemeterEntry();
};

