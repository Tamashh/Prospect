#pragma once
#include "CoreMinimal.h"
#include "YSendGamesightEventResponse.generated.h"

USTRUCT(BlueprintType)
struct FYSendGamesightEventResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;

    BACKENDMODELS_API FYSendGamesightEventResponse();
};
