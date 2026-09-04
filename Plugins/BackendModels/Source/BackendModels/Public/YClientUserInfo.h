#pragma once
#include "CoreMinimal.h"
#include "EYUserState.h"
#include "YClientUserInfo.generated.h"

USTRUCT(BlueprintType)
struct FYClientUserInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYUserState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 squadSize;
    
    BACKENDMODELS_API FYClientUserInfo();
};

