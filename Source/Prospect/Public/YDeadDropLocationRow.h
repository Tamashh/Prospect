#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YDeadDropLocationRow.generated.h"

USTRUCT(BlueprintType)
struct FYDeadDropLocationRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_name;
    
    PROSPECT_API FYDeadDropLocationRow();
};

