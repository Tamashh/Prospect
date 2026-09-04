#pragma once
#include "CoreMinimal.h"
#include "YDamageCauserInfo.h"
#include "YDamageInfoDetail.h"
#include "YCondensedDamageData.generated.h"

USTRUCT(BlueprintType)
struct FYCondensedDamageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYDamageCauserInfo m_damageCauserInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYDamageInfoDetail> m_details;
    
    PROSPECT_API FYCondensedDamageData();
};

