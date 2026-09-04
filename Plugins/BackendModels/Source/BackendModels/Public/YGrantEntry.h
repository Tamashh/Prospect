#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYGrantType.h"
#include "YGrantEntry.generated.h"

USTRUCT(BlueprintType)
struct FYGrantEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYGrantType m_grantType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_grantTypeRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_amount;
    
    BACKENDMODELS_API FYGrantEntry();
};

