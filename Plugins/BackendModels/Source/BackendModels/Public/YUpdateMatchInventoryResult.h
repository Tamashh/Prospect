#pragma once
#include "CoreMinimal.h"
#include "YUpdateInventoryResultBase.h"
#include "YUpdateMatchInventoryResult.generated.h"

USTRUCT(BlueprintType)
struct FYUpdateMatchInventoryResult : public FYUpdateInventoryResultBase {
    GENERATED_BODY()
public:
    BACKENDMODELS_API FYUpdateMatchInventoryResult();
};

