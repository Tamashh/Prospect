#pragma once
#include "CoreMinimal.h"
#include "YGetUsersDataByNamesRequest.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYGetUsersDataByNamesRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> userNames;
    
    FYGetUsersDataByNamesRequest();
};

