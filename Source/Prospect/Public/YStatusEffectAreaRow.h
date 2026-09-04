#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYGameplayContextType.h"
#include "YDataTableRowBase.h"
#include "YStatusEffectAreaRow.generated.h"

USTRUCT(BlueprintType)
struct FYStatusEffectAreaRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_damagePerTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_damageTickFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_penetration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_perksToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_damageInfoApplyRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYGameplayContextType m_damageContext;
    
    PROSPECT_API FYStatusEffectAreaRow();
};

