#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YWeaponModRolledWeightAndPercentage.h"
#include "YRolledModRarityRow.generated.h"

USTRUCT(BlueprintType)
struct FYRolledModRarityRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYWeaponModRolledWeightAndPercentage> m_weaponModsRollWeightsPerRarity;

    PROSPECT_API FYRolledModRarityRow();
};
