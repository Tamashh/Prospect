#pragma once
#include "CoreMinimal.h"
#include "YDamageOriginInfo.h"
#include "YDamageInfoDetail.generated.h"

USTRUCT(BlueprintType)
struct FYDamageInfoDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYDamageOriginInfo m_damageOriginInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_hitsTotal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_hitsCritical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_amountDamage;
    
    PROSPECT_API FYDamageInfoDetail();
};

