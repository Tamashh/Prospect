#pragma once
#include "CoreMinimal.h"
#include "EYLoadoutPresetItemStatus.h"
#include "EYPlayerSetType.h"
#include "YLoadoutPresetItem.h"
#include "YLoadoutPresetUIItem.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYLoadoutPresetUIItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_guid;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPlayerSetType m_playerSetType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYLoadoutPresetItem m_loadoutPresetItem;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, EYLoadoutPresetItemStatus> m_missingModIds;

    FYLoadoutPresetUIItem();
};
