#pragma once
#include "CoreMinimal.h"
#include "YDebugMatchmakeToSessionIdRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugMatchmakeToSessionIdRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionId;
    
    BACKENDMODELS_API FYDebugMatchmakeToSessionIdRequest();
};

