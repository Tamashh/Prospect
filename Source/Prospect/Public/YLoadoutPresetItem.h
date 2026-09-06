#pragma once
#include "CoreMinimal.h"
#include "YLoadoutPresetItemData.h"
#include "EYLoadoutPresetItemStatus.h"
#include "YLoadoutPresetItem.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYLoadoutPresetItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYLoadoutPresetItemData m_loadoutPresetItemData;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYLoadoutPresetItemStatus m_status;

    FYLoadoutPresetItem();
};
