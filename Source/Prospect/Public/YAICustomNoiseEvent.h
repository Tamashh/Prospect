#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense_Hearing.h"
#include "YAICustomNoiseEvent.generated.h"

USTRUCT(BlueprintType)
struct FYAICustomNoiseEvent : public FAINoiseEvent {
    GENERATED_BODY()
public:
    PROSPECT_API FYAICustomNoiseEvent();
};

