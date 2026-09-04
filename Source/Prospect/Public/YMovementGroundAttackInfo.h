#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YMovementGroundAttackInfo.generated.h"

USTRUCT(BlueprintType)
struct FYMovementGroundAttackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_impactLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_impactDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_impactNormal;
    
    PROSPECT_API FYMovementGroundAttackInfo();
};

