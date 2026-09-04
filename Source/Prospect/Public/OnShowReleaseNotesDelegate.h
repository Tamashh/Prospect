#pragma once
#include "CoreMinimal.h"
#include "OnShowReleaseNotesDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShowReleaseNotes, bool, Visiblity);

