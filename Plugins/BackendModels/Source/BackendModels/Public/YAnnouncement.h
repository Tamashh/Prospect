#pragma once
#include "CoreMinimal.h"
#include "EYChannelType.h"
#include "YAnnouncement.generated.h"

USTRUCT(BlueprintType)
struct FYAnnouncement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Msg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYChannelType ChannelType;
    
    BACKENDMODELS_API FYAnnouncement();
};

