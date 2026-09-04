#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YContractDynamicData.h"
#include "YContractData.generated.h"

USTRUCT(BlueprintType)
struct FYContractData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_contractRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYContractDynamicData m_contractDynamicData;
    
    PROSPECT_API FYContractData();
};

