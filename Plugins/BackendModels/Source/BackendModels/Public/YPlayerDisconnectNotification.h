#pragma once
#include "CoreMinimal.h"
#include "YPlayerDisconnectNotification.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerDisconnectNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYPlayerDisconnectNotification();
};

