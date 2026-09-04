#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YGameTipRow.generated.h"

USTRUCT(BlueprintType)
struct FYGameTipRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_tipText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_sustainDuration;
    
    PROSPECT_API FYGameTipRow();
};

