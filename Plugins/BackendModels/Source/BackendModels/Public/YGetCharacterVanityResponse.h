#pragma once
#include "CoreMinimal.h"
#include "YCharacterVanity.h"
#include "YGetCharacterVanityResponse.generated.h"

USTRUCT(BlueprintType)
struct FYGetCharacterVanityResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool success;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCharacterVanity returnVanity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCharacterVanity> notActiveCharacterVanity;
    
    BACKENDMODELS_API FYGetCharacterVanityResponse();
};

