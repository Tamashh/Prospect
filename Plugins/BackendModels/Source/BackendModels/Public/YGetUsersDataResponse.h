#pragma once
#include "CoreMinimal.h"
#include "EYResponse.h"
#include "YUserData.h"
#include "YGetUsersDataResponse.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYGetUsersDataResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYUserData> usersData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYResponse Result;
    
    FYGetUsersDataResponse();
};

