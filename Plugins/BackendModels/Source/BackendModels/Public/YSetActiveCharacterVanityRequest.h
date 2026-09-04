#pragma once
#include "CoreMinimal.h"
#include "YCharacterVanity.h"
#include "YSetActiveCharacterVanityRequest.generated.h"

USTRUCT(BlueprintType)
struct FYSetActiveCharacterVanityRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCharacterVanity desiredVanity;
    
    BACKENDMODELS_API FYSetActiveCharacterVanityRequest();
};

