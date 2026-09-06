#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "YDataTableRowBase.h"
#include "YMeleeWeaponAudioDataTableRow.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FYMeleeWeaponAudioDataTableRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<USoundBase>> m_meleeSoundsPerTag;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_runAutomationTest;

    PROSPECT_API FYMeleeWeaponAudioDataTableRow();
};
