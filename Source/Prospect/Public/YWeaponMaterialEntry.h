#pragma once
#include "CoreMinimal.h"
#include "YWeaponMaterialEntry.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FYWeaponMaterialEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> m_materialVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_materialIndex;
    
    PROSPECT_API FYWeaponMaterialEntry();
};

