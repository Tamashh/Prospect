#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Templates/SubclassOf.h"
#include "YAbilityActionEntry.generated.h"

class UYCharacterAbilityComponent;

USTRUCT(BlueprintType)
struct FYAbilityActionEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYCharacterAbilityComponent> m_abilityClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_dataRow;
    
    PROSPECT_API FYAbilityActionEntry();
};

