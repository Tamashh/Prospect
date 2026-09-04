#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYCharacterCustomizationColorType.h"
#include "YCharacterCustomizationMaterialPieceEntry.h"
#include "YCharacterCustomizationPieceCollection.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FYCharacterCustomizationPieceCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYCharacterCustomizationColorType m_colorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_materialDataTableReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCharacterCustomizationMaterialPieceEntry> m_materials;
    
    PROSPECT_API FYCharacterCustomizationPieceCollection();
};

