#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YLocationData.generated.h"

USTRUCT(BlueprintType)
struct FYLocationData : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_locationName;
    
    PROSPECT_API FYLocationData();
};

