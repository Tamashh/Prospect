#pragma once
#include "CoreMinimal.h"
#include "EYWeaponPlayState.h"
#include "YWeaponAnimationStaticData.h"
#include "YWeaponAnimations.generated.h"

USTRUCT(BlueprintType)
struct FYWeaponAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EYWeaponPlayState, FYWeaponAnimationStaticData> m_weaponAnimationAssociation;
    
    PROSPECT_API FYWeaponAnimations();
};

