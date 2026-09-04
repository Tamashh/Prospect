#pragma once
#include "CoreMinimal.h"
#include "YWeaponAnimationStaticData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FYWeaponAnimationStaticData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> m_weaponAnimationVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> m_playerAnimationThirdPersonVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> m_playerAnimationFirstPersonVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> m_weaponThirdPersonPlayerAnimationVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> m_playerAnimationFirstPersonLowStaminaVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> m_playerAnimationThirdPersonLowStaminaVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_desiredTuningPlayDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_animationRateScaleOverride;
    
    PROSPECT_API FYWeaponAnimationStaticData();
};

