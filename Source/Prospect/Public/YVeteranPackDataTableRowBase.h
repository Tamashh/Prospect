#pragma once
#include "CoreMinimal.h"
#include "YBundleDataTableRowBase.h"
#include "YVeteranPackDataTableRowBase.generated.h"

USTRUCT(BlueprintType)
struct FYVeteranPackDataTableRowBase : public FYBundleDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_minimumVeteranPointsRequired;
    
    PROSPECT_API FYVeteranPackDataTableRowBase();
};

