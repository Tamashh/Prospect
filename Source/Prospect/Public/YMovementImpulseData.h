#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YMovementImpulseData.generated.h"

USTRUCT(BlueprintType)
struct FYMovementImpulseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector m_impulseToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isActive;
    
    PROSPECT_API FYMovementImpulseData();
};

