#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYGameplayContextType.h"
#include "YPlayerMeleeData.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerMeleeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_attackDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_meleeAttackStrikeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_meleeTransportHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYGameplayContextType m_damageContextType;
    
    PROSPECT_API FYPlayerMeleeData();
};

