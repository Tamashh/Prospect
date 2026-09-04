#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYWeaponSlotType.h"
#include "YDamageDealingTriggerData.generated.h"

USTRUCT(BlueprintType)
struct FYDamageDealingTriggerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYWeaponSlotType m_slotTriggerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_dataTableRowHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_damageModification;
    
    PROSPECT_API FYDamageDealingTriggerData();
};

