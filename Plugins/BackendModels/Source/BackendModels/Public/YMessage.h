#pragma once
#include "CoreMinimal.h"
#include "EYChannelType.h"
#include "YMessage.generated.h"

USTRUCT(BlueprintType)
struct FYMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString from;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Msg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYChannelType ChannelType;
    
    BACKENDMODELS_API FYMessage();
};

