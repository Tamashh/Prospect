#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YDefaultInventoryInfoRow.generated.h"

USTRUCT(BlueprintType)
struct FYDefaultInventoryInfoRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_inventoryStashLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_inventoryBagLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_inventorySafeLimit;
    
    PROSPECT_API FYDefaultInventoryInfoRow();
};

