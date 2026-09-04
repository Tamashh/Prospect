#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYAbilityState.h"
#include "YAbilityStateInfo.generated.h"

class UYCharacterAbilityComponent;

USTRUCT(BlueprintType)
struct FYAbilityStateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_abilityRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYAbilityState m_state;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYCharacterAbilityComponent* m_abilityComponent;
    
    PROSPECT_API FYAbilityStateInfo();
};

