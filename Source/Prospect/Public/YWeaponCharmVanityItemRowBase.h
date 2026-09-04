#pragma once
#include "CoreMinimal.h"
#include "YVanityItemRowBase.h"
#include "YWeaponCharmVanityItemRowBase.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FYWeaponCharmVanityItemRowBase : public FYVanityItemRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> m_weaponCharmMesh;
    
    PROSPECT_API FYWeaponCharmVanityItemRowBase();
};

