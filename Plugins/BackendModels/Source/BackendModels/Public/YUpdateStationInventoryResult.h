#pragma once
#include "CoreMinimal.h"
#include "YUpdateInventoryResultBase.h"
#include "YUpdateStationInventoryResult.generated.h"

USTRUCT(BlueprintType)
struct FYUpdateStationInventoryResult : public FYUpdateInventoryResultBase {
    GENERATED_BODY()
public:
    BACKENDMODELS_API FYUpdateStationInventoryResult();
};

