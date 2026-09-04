#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YContractProgressionUnlockData.generated.h"

USTRUCT(BlueprintType)
struct FYContractProgressionUnlockData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_contracts;
    
    PROSPECT_API FYContractProgressionUnlockData();
};

