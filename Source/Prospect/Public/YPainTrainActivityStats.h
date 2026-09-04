#pragma once
#include "CoreMinimal.h"
#include "EYPainTrainStatus.h"
#include "YBaseActivityStats.h"
#include "YPainTrainActivityStats.generated.h"

USTRUCT(BlueprintType)
struct FYPainTrainActivityStats : public FYBaseActivityStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPainTrainStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 pain_train_id;
    
    PROSPECT_API FYPainTrainActivityStats();
};

