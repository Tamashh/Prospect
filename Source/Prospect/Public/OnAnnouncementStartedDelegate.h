#pragma once
#include "CoreMinimal.h"
#include "YAnnouncementPlaybackOptions.h"
#include "YVOAudioDatatableRow.h"
#include "YVOLine.h"
#include "OnAnnouncementStartedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAnnouncementStarted, FYVOAudioDatatableRow, voicelineData, FYAnnouncementPlaybackOptions, playbackOptions, const FYVOLine&, voiceLine);

