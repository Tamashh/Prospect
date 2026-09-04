#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YDataTableRowBase.h"
#include "YFXCategoryMaterialFloatParemeterEntry.h"
#include "YFXCategoryMaterialParemeterEntry.h"
#include "YWeaponImpactEffectsAssociation.h"
#include "YBaseFXCategoryRow.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYBaseFXCategoryRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYFXCategoryMaterialParemeterEntry> m_materialParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYFXCategoryMaterialFloatParemeterEntry> m_materialFloatParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_impactEffectsDataTableRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYWeaponImpactEffectsAssociation m_defaultEffect;
    
    FYBaseFXCategoryRow();
};

