#pragma once
#include "CoreMinimal.h"
#include "YTournamentDataResponse.generated.h"

USTRUCT(BlueprintType)
struct FYTournamentDataResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isAllowed;
    
    BACKENDMODELS_API FYTournamentDataResponse();
};

