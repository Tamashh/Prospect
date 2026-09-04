#pragma once
#include "CoreMinimal.h"
#include "YVanityItemRowBase.h"
#include "YPetVanityItemRowBase.generated.h"

USTRUCT(BlueprintType)
struct FYPetVanityItemRowBase : public FYVanityItemRowBase {
    GENERATED_BODY()
public:
    PROSPECT_API FYPetVanityItemRowBase();
};

