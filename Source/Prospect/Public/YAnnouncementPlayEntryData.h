#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YAnnouncementPlaybackOptions.h"
#include "YAnnouncementPlayEntryData.generated.h"

USTRUCT(BlueprintType)
struct FYAnnouncementPlayEntryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timestampAnnounceRequested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYAnnouncementPlaybackOptions m_playbackOptions;
    
    PROSPECT_API FYAnnouncementPlayEntryData();
};

