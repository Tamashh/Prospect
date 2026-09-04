#pragma once
#include "CoreMinimal.h"
#include "EDataType.generated.h"

UENUM(BlueprintType)
enum class EDataType : uint8 {
    DT_INT,
    DT_STRING,
    DT_FLOAT,
    DT_BOOL,
    DT_BYTE,
    DT_CHAR,
    DT_UNSPEC,
};

