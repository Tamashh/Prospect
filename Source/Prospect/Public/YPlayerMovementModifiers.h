#pragma once
#include "CoreMinimal.h"
#include "EYPlayerStateBlueprint.h"
#include "YPlayerMovementModifiersPerState.h"
#include "YPlayerMovementModifiers.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerMovementModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPlayerStateBlueprint m_state;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerMovementModifiersPerState m_values;

    PROSPECT_API FYPlayerMovementModifiers();
};
