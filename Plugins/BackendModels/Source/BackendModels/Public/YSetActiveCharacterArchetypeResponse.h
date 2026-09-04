#pragma once
#include "CoreMinimal.h"
#include "YCharacterVanity.h"
#include "YSetActiveCharacterArchetypeResponse.generated.h"

USTRUCT(BlueprintType)
struct FYSetActiveCharacterArchetypeResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool success;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCharacterVanity returnVanity;
    
    BACKENDMODELS_API FYSetActiveCharacterArchetypeResponse();
};

