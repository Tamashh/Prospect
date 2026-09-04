#pragma once
#include "CoreMinimal.h"
#include "EYItemType.h"
#include "Engine/DataTable.h"
#include "YBasicInsuranceData.h"
#include "YDataTableRowBase.h"
#include "YPremiumInsuranceData.h"
#include "YInventoryInsuranceDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FYInventoryInsuranceDataTableRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYBasicInsuranceData m_basic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPremiumInsuranceData m_premium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYItemType> m_ignoredItemTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_damageTypesVoidingOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_payoutDelayMinutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_maxActiveClaims;
    
    PROSPECT_API FYInventoryInsuranceDataTableRow();
};

