#pragma once
#include "CoreMinimal.h"
#include "YGameServerRequest.h"
#include "YGetCharacterVanityServerRequest.generated.h"

USTRUCT(BlueprintType)
struct FYGetCharacterVanityServerRequest : public FYGameServerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYGetCharacterVanityServerRequest();
};

