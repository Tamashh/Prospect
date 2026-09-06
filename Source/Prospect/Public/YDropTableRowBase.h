#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YDropTableItem.h"
#include "YDropTableRowBase.generated.h"

USTRUCT(BlueprintType)
struct FYDropTableRowBase : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYDropTableItem> m_dropTableItems;

    PROSPECT_API FYDropTableRowBase();
};
