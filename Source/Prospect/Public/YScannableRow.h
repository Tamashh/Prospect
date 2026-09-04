#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YDataTableRowBase.h"
#include "YScannableRow.generated.h"

USTRUCT(BlueprintType)
struct FYScannableRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minScanDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxScanDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_debugString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor m_color;
    
    PROSPECT_API FYScannableRow();
};

