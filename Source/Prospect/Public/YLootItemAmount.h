#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YLootItemAmount.generated.h"

USTRUCT(BlueprintType)
struct FYLootItemAmount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_modsToAdd;

    PROSPECT_API FYLootItemAmount();
};

