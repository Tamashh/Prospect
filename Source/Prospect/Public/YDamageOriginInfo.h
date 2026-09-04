#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYGameplayContextType.h"
#include "YDamageOriginInfo.generated.h"

USTRUCT(BlueprintType)
struct FYDamageOriginInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_damageOriginTableRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_damageInfoApplyRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYGameplayContextType m_damageContext;
    
    PROSPECT_API FYDamageOriginInfo();
};

