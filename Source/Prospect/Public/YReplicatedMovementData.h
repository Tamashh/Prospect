#pragma once
#include "CoreMinimal.h"
#include "YReplicatedMovementData.generated.h"

USTRUCT(BlueprintType)
struct FYReplicatedMovementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_serverDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_serverSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_predictedServerSpeed;
    
    PROSPECT_API FYReplicatedMovementData();
};

