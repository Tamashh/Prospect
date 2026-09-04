#pragma once
#include "CoreMinimal.h"
#include "EYPassiveGeneratorRewardType.h"
#include "EYTechTreeNodePerkType.h"
#include "YDataTableRowBase.h"
#include "YGeneratorRow.generated.h"

USTRUCT(BlueprintType)
struct FYGeneratorRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_generatorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_generatorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPassiveGeneratorRewardType m_generatorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_baseGenIntervalMinutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_baseGenRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_baseCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYTechTreeNodePerkType m_capPerkEffector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYTechTreeNodePerkType m_genRatePerkEffector;
    
    PROSPECT_API FYGeneratorRow();
};

