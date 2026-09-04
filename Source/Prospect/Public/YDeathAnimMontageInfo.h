#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EYDeathType.h"
#include "YDealtDamageData.h"
#include "YDeathAnimMontageInfo.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FYDeathAnimMontageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYDeathType m_deathType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* m_montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_deathToRagdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_serverTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYDealtDamageData m_lastTimeDamagedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_deathAnimationGameplayTags;
    
    PROSPECT_API FYDeathAnimMontageInfo();
};

