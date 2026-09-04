#pragma once
#include "CoreMinimal.h"
#include "YBroadcast.generated.h"

USTRUCT(BlueprintType)
struct FYBroadcast {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString from;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Msg;
    
    BACKENDMODELS_API FYBroadcast();
};

