#pragma once
#include "CoreMinimal.h"
#include "YGetUsersDataByEpicIdsRequest.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYGetUsersDataByEpicIdsRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> epicIds;
    
    FYGetUsersDataByEpicIdsRequest();
};

