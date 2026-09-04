#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YItemDataTableRowBase.h"
#include "YAmmoTypeDataTableRow.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FYAmmoTypeDataTableRow : public FYItemDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_lootDropHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_ammoNamePlayerFacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInstance> m_ammoIcon;
    
    PROSPECT_API FYAmmoTypeDataTableRow();
};

