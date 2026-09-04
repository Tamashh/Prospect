#pragma once
#include "CoreMinimal.h"
#include "YStaminaMeleeMontageData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FYStaminaMeleeMontageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* m_weakenedMeleeMissMontageTPP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* m_weakenedMeleeMissMontageFPP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* m_weakenedMeleeImpactMontageTPP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* m_weakenedMeleeImpactMontageFPP;
    
    PROSPECT_API FYStaminaMeleeMontageData();
};

