#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YVPToRewarsdDataTableRow.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FYVPToRewarsdDataTableRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_rewardsPackageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_vpThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> m_rewardsDropTablePath;
    
    PROSPECT_API FYVPToRewarsdDataTableRow();
};

