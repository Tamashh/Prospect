#pragma once
#include "CoreMinimal.h"
#include "YGeneratorInfo.h"
#include "YRewardDataTableRow.h"
#include "YDailyCrateGeneratorInfo.generated.h"

USTRUCT(BlueprintType)
struct FYDailyCrateGeneratorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYGeneratorInfo m_generatorInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_crateLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYRewardDataTableRow> m_crateItems;
    
    PROSPECT_API FYDailyCrateGeneratorInfo();
};

