#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YRewardsPoolGrantTupleRow.h"
#include "YGeneratorCrateLevelToRewardsDataTableRow.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FYGeneratorCrateLevelToRewardsDataTableRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_rewardsPackageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> m_rewardsDropTablePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYRewardsPoolGrantTupleRow> m_rewardsGrants;
    
    PROSPECT_API FYGeneratorCrateLevelToRewardsDataTableRow();
};

