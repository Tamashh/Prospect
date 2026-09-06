#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYWeaponPlayState.h"
#include "YCharacterAnimFirstPersonEntry.h"
#include "YCharacterAnimThirdPersonEntry.h"
#include "YCharacterCustomizationRowBase.h"
#include "YWeaponPlayStateAnimationsEntry.h"
#include "YMeleeVanityDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FYMeleeVanityDataTableRow : public FYCharacterCustomizationRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_audioDataTableRowHandle;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYWeaponPlayState, FYWeaponPlayStateAnimationsEntry> m_animsForStateOverride;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCharacterAnimThirdPersonEntry m_characterAnimThirdPersonOverride;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCharacterAnimFirstPersonEntry m_characterAnimFirstPersonOverride;

    PROSPECT_API FYMeleeVanityDataTableRow();
};

