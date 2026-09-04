#pragma once
#include "CoreMinimal.h"
#include "YNotificationsReadRequest.generated.h"

USTRUCT(BlueprintType)
struct FYNotificationsReadRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> notifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> accountNotifications;
    
    PROSPECT_API FYNotificationsReadRequest();
};

