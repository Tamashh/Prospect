#pragma once
#include "CoreMinimal.h"
#include "EYModificationSlotType.h"
#include "YSpawnChancesPerModSlotType.generated.h"

USTRUCT(BlueprintType)
struct FYSpawnChancesPerModSlotType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYModificationSlotType m_modSlotType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_spawnChance;

    PROSPECT_API FYSpawnChancesPerModSlotType();
};
