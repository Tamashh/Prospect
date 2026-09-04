#pragma once
#include "CoreMinimal.h"
#include "YDebugAddFactionProgressResponse.generated.h"

USTRUCT(BlueprintType)
struct FYDebugAddFactionProgressResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString factionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 reputation;
    
    BACKENDMODELS_API FYDebugAddFactionProgressResponse();
};

