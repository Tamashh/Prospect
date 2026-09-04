#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YAbilityActionDataTableRow.h"
#include "YAbilityActionKineticShieldData.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FYAbilityActionKineticShieldData : public FYAbilityActionDataTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* m_kineticShieldMaterialNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* m_kineticShieldMaterialPact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* m_kineticShieldMaterialEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_shieldFadeOutParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_healthRowHandle;
    
    PROSPECT_API FYAbilityActionKineticShieldData();
};

