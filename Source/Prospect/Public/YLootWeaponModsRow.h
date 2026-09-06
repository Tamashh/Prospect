#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YDataTableRowBase.h"
#include "YSpawnChancesPerModSlotType.h"
#include "YLootWeaponModsRow.generated.h"

USTRUCT(BlueprintType)
struct FYLootWeaponModsRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_modRarityRowHandle;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_weaponRowHandle;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYSpawnChancesPerModSlotType> m_spawnChancesPerModSlotType;

    PROSPECT_API FYLootWeaponModsRow();
};
