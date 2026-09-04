#pragma once
#include "CoreMinimal.h"
#include "EYUpdateReadStateResult.h"
#include "YUpdateReadStateResponse.generated.h"

USTRUCT(BlueprintType)
struct FYUpdateReadStateResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYUpdateReadStateResult returnResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString messageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool hasRead;
    
    BACKENDMODELS_API FYUpdateReadStateResponse();
};

