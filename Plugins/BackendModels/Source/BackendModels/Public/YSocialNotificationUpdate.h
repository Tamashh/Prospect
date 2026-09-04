#pragma once
#include "CoreMinimal.h"
#include "YSocialProfileEntry.h"
#include "YSocialNotificationUpdate.generated.h"

USTRUCT(BlueprintType)
struct FYSocialNotificationUpdate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYSocialProfileEntry entry;
    
    BACKENDMODELS_API FYSocialNotificationUpdate();
};

