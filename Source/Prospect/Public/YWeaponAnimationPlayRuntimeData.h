#pragma once
#include "CoreMinimal.h"
#include "YWeaponAnimationStaticData.h"
#include "YWeaponAnimationPlayRuntimeData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FYWeaponAnimationPlayRuntimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYWeaponAnimationStaticData m_staticData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> m_weaponAnimationsStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> m_playerFirstPersonStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> m_thirdPersonStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> m_thirdPersonWeaponStack;
    
    PROSPECT_API FYWeaponAnimationPlayRuntimeData();
};

