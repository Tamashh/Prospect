#pragma once
#include "CoreMinimal.h"
#include "YVanityMaterialEntry.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FYVanityMaterialEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> m_material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_index;
    
    PROSPECT_API FYVanityMaterialEntry();
};

