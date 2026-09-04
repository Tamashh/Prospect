#pragma once
#include "CoreMinimal.h"
#include "YUpdateUserTitleDisplayNameCustomResponse.generated.h"

USTRUCT(BlueprintType)
struct FYUpdateUserTitleDisplayNameCustomResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NewDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ErrorCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString errorMessage;
    
    ONLINESUBSYSTEMPLAYFAB_API FYUpdateUserTitleDisplayNameCustomResponse();
};

