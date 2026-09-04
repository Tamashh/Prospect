#pragma once
#include "CoreMinimal.h"
#include "YSendAnnouncement.generated.h"

USTRUCT(BlueprintType)
struct FYSendAnnouncement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Msg;
    
    BACKENDMODELS_API FYSendAnnouncement();
};

