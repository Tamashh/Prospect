#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YAbilityActionDataTableRow.h"
#include "YAbilityActionCloakData.generated.h"

USTRUCT(BlueprintType)
struct FYAbilityActionCloakData : public FYAbilityActionDataTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_cloakData;
    
    PROSPECT_API FYAbilityActionCloakData();
};

