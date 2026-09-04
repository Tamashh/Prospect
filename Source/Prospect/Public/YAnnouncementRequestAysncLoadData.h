#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YAnnouncementPlaybackOptions.h"
#include "YAnnouncementRequestAysncLoadData.generated.h"

USTRUCT(BlueprintType)
struct FYAnnouncementRequestAysncLoadData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYAnnouncementPlaybackOptions m_playbackOptions;
    
    PROSPECT_API FYAnnouncementRequestAysncLoadData();
};

