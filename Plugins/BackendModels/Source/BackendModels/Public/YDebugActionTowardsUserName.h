#pragma once
#include "CoreMinimal.h"
#include "YDebugActionTowardsUserName.generated.h"

USTRUCT(BlueprintType)
struct FYDebugActionTowardsUserName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ownerInternalUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString friendActionUserName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 actionRequest;
    
    BACKENDMODELS_API FYDebugActionTowardsUserName();
};

