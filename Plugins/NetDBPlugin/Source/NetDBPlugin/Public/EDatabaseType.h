#pragma once
#include "CoreMinimal.h"
#include "EDatabaseType.generated.h"

UENUM(BlueprintType)
enum class EDatabaseType : uint8 {
    DT_PostgreSQL,
    DT_NoDB,
};

