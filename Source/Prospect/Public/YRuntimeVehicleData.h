#pragma once
#include "CoreMinimal.h"
#include "EYVehicleStateType.h"
#include "YRuntimeVehicleData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FYRuntimeVehicleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_relevantAcquisitionActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_cachedRelatedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYVehicleStateType m_state;
    
    PROSPECT_API FYRuntimeVehicleData();
};

