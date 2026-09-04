#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YDamageInfoRow.h"
#include "YDamageInfoApplyRow.generated.h"

USTRUCT(BlueprintType)
struct FYDamageInfoApplyRow : public FYDamageInfoRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_uiImpactWarning;
    
    PROSPECT_API FYDamageInfoApplyRow();
};

