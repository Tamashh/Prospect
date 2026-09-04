#pragma once
#include "CoreMinimal.h"
#include "EYLogVerbosity.generated.h"

UENUM(BlueprintType)
enum class EYLogVerbosity : uint8 {
    NoLogging,
    Fatal,
    Error,
    Warning,
    Display,
    Log,
    Verbose,
    VeryVerbose,
};

