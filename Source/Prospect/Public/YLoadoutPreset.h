#pragma once
#include "CoreMinimal.h"
#include "EYPlayerSetType.h"
#include "YLoadoutPresetItem.h"
#include "YLoadoutPreset.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYLoadoutPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_loadoutPresetId;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYPlayerSetType, FYLoadoutPresetItem> m_individualLoadoutPresetItems;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYLoadoutPresetItem> m_bagLoadoutPresetItems;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYLoadoutPresetItem> m_safeContainerLoadoutPresetItems;

    FYLoadoutPreset();
};
