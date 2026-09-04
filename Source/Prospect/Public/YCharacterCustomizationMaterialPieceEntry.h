#pragma once
#include "CoreMinimal.h"
#include "YCharacterCustomizationMaterialPieceEntry.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FYCharacterCustomizationMaterialPieceEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> m_material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_index;
    
    PROSPECT_API FYCharacterCustomizationMaterialPieceEntry();
};

