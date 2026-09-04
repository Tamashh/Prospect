#pragma once
#include "CoreMinimal.h"
#include "YCharacterVanity.h"
#include "YSetActiveCharacterVanityResponse.generated.h"

USTRUCT(BlueprintType)
struct FYSetActiveCharacterVanityResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCharacterVanity returnVanity;
    
    BACKENDMODELS_API FYSetActiveCharacterVanityResponse();
};

