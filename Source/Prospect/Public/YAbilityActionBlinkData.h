#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YAbilityActionDataTableRow.h"
#include "YAbilityActionBlinkData.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FYAbilityActionBlinkData : public FYAbilityActionDataTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_startSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_endSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_particleSystemBlinkAway;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_particleSystemBlinkInto;
    
    PROSPECT_API FYAbilityActionBlinkData();
};

