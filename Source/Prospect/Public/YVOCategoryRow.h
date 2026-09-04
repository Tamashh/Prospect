#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YDataTableRowBase.h"
#include "YVOCategoryRow.generated.h"

USTRUCT(BlueprintType)
struct FYVOCategoryRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_color;
    
    PROSPECT_API FYVOCategoryRow();
};

