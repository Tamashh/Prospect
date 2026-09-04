#pragma once
#include "CoreMinimal.h"
#include "YDebugSocialNotification.generated.h"

USTRUCT(BlueprintType)
struct FYDebugSocialNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Type;
    
    BACKENDMODELS_API FYDebugSocialNotification();
};

