#pragma once
#include "CoreMinimal.h"
#include "YPlayerProfile.h"
#include "YSocialProfileUpdated.generated.h"

USTRUCT(BlueprintType)
struct FYSocialProfileUpdated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerProfile entry;
    
    BACKENDMODELS_API FYSocialProfileUpdated();
};

