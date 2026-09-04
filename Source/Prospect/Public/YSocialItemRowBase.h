#pragma once
#include "CoreMinimal.h"
#include "YVanityItemRowBase.h"
#include "YSocialItemRowBase.generated.h"

USTRUCT(BlueprintType)
struct FYSocialItemRowBase : public FYVanityItemRowBase {
    GENERATED_BODY()
public:
    PROSPECT_API FYSocialItemRowBase();
};

