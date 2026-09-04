#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YCharacterCustomizationPieceCollection.h"
#include "YVanityItemRowBase.h"
#include "YMaterialVariationDataRowBase.generated.h"

USTRUCT(BlueprintType)
struct FYMaterialVariationDataRowBase : public FYVanityItemRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCharacterCustomizationPieceCollection m_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_basePreviewRow;
    
    PROSPECT_API FYMaterialVariationDataRowBase();
};

