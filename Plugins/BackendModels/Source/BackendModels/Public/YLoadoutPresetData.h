#pragma once
#include "CoreMinimal.h"
#include "YLoadoutPresetItemData.h"
#include "YLoadoutPresetData.generated.h"

USTRUCT(BlueprintType)
struct FYLoadoutPresetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_loadoutPresetId;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYLoadoutPresetItemData m_shieldId;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYLoadoutPresetItemData m_helmetId;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYLoadoutPresetItemData m_primaryWeapon;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYLoadoutPresetItemData m_secondaryWeapon;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYLoadoutPresetItemData m_backpackId;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYLoadoutPresetItemData> m_backpackContent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYLoadoutPresetItemData> m_safePocketContent;

    BACKENDMODELS_API FYLoadoutPresetData();
};
