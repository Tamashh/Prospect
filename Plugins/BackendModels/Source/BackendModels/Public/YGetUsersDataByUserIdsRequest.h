#pragma once
#include "CoreMinimal.h"
#include "YGetUsersDataByUserIdsRequest.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYGetUsersDataByUserIdsRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> userIds;
    
    FYGetUsersDataByUserIdsRequest();
};

