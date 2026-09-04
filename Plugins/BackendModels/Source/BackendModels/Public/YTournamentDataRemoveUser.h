#pragma once
#include "CoreMinimal.h"
#include "YTournamentDataRemoveUser.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYTournamentDataRemoveUser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    FYTournamentDataRemoveUser();
};

