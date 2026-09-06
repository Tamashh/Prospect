#pragma once
#include "CoreMinimal.h"
#include "YPlayerMovementModifiersPerState.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerMovementModifiersPerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxAcceleration;

    PROSPECT_API FYPlayerMovementModifiersPerState();
};
