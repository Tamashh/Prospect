#pragma once
#include "CoreMinimal.h"
#include "EYItemRarityType.h"
#include "YWeaponModRolledWeightAndPercentage.generated.h"

USTRUCT(BlueprintType)
struct FYWeaponModRolledWeightAndPercentage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYItemRarityType m_itemRarity;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_spawnWeight;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_spawnChanceInPercent;

    PROSPECT_API FYWeaponModRolledWeightAndPercentage();
};

