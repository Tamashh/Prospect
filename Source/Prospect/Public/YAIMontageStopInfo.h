#pragma once
#include "CoreMinimal.h"
#include "YAIMontageStopInfo.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FYAIMontageStopInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* m_montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_blendOutTime;
    
    PROSPECT_API FYAIMontageStopInfo();
};

