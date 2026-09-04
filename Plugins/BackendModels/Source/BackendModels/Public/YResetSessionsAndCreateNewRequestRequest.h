#pragma once
#include "CoreMinimal.h"
#include "YResetSessionsAndCreateNewRequestRequest.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYResetSessionsAndCreateNewRequestRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString desiredRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 shutdownType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 newStationServers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 newMatchServers;
    
    FYResetSessionsAndCreateNewRequestRequest();
};

