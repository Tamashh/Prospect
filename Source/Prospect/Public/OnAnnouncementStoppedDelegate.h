#pragma once
#include "CoreMinimal.h"
#include "YAnnouncementPlayEntryData.h"
#include "OnAnnouncementStoppedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAnnouncementStopped, FYAnnouncementPlayEntryData, voicelineData, bool, cancelled);

