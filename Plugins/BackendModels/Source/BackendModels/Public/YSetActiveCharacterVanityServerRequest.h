#pragma once
#include "CoreMinimal.h"
#include "YCharacterVanity.h"
#include "YGameServerRequest.h"
#include "YSetActiveCharacterVanityServerRequest.generated.h"

USTRUCT(BlueprintType)
struct FYSetActiveCharacterVanityServerRequest : public FYGameServerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCharacterVanity desiredVanity;
    
    BACKENDMODELS_API FYSetActiveCharacterVanityServerRequest();
};

