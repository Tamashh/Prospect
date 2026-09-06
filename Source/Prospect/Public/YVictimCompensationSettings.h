#pragma once
#include "CoreMinimal.h"
#include "YVictimCompensationSettings.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYVictimCompensationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_killSnapshotCountLimit;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_killSnapshotDaysLimit;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_processVictimCompensationsDelayInHours;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_deathSnapshotDaysLimit;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_deathSnapshotCountLimit;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_itemsToCompensateCountLimit;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_filterItemsInEndOfMatchSafePockets;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_enableDoubleCheaterProcessing;

    FYVictimCompensationSettings();
};

