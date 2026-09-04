#pragma once
#include "CoreMinimal.h"
#include "YDespawnPickUpInfo.generated.h"

USTRUCT(BlueprintType)
struct FYDespawnPickUpInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minAlivePickUpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minPlayerDistance;
    
    PROSPECT_API FYDespawnPickUpInfo();
};

