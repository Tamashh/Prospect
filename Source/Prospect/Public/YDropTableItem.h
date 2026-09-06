#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYDropTableItemType.h"
#include "YDropTableItem.generated.h"

USTRUCT(BlueprintType)
struct FYDropTableItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rowHandle;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYDropTableItemType m_type;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_weight;

    PROSPECT_API FYDropTableItem();
};
