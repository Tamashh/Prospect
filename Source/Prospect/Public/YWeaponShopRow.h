#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YDataTableRowBase.h"
#include "YWeaponShopRow.generated.h"

USTRUCT(BlueprintType)
struct FYWeaponShopRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_factionRowHandle;
    
    PROSPECT_API FYWeaponShopRow();
};

