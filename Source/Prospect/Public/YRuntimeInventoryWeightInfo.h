#pragma once
#include "CoreMinimal.h"
#include "YRuntimeInventoryWeightInfo.generated.h"

USTRUCT(BlueprintType)
struct FYRuntimeInventoryWeightInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxBagContainerWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_currentBagContainerWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxSafeContainerWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_currentSafeContainerWeight;
    
    PROSPECT_API FYRuntimeInventoryWeightInfo();
};

