#pragma once
#include "CoreMinimal.h"
#include "EYEzProfileRuntimeState.generated.h"

UENUM(BlueprintType)
enum class EYEzProfileRuntimeState : uint8 {
    None,
    ProfileStats,
    FinalizingStats,
    UploadingFiles,
};

