#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYMissionVOPlayContext.h"
#include "YMissionVOData.generated.h"

USTRUCT(BlueprintType)
struct FYMissionVOData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_voiceOverRow;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYMissionVOPlayContext m_playContext;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_delayVoiceOverUntilScreensAreClosed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_VODelayExceptionScenes;

    PROSPECT_API FYMissionVOData();
};

