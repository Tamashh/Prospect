#pragma once
#include "CoreMinimal.h"
#include "YTournamentDataAddUser.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYTournamentDataAddUser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    FYTournamentDataAddUser();
};

