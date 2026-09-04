#pragma once
#include "CoreMinimal.h"
#include "EYStatValueComparison.h"
#include "EYStatValueDisplayMethod.h"
#include "YDataTableRowBase.h"
#include "YEOSStatData.generated.h"

USTRUCT(BlueprintType)
struct FYEOSStatData : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_translateStatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYStatValueDisplayMethod m_displayMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYStatValueComparison m_comparisonMethod;
    
    PROSPECT_API FYEOSStatData();
};

