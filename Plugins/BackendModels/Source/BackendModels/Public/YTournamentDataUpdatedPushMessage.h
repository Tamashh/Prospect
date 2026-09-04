#pragma once
#include "CoreMinimal.h"
#include "YTournamentDataUpdatedPushMessage.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYTournamentDataUpdatedPushMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isAllowed;
    
    FYTournamentDataUpdatedPushMessage();
};

