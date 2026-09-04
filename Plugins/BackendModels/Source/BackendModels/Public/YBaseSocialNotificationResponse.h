#pragma once
#include "CoreMinimal.h"
#include "YBaseSocialNotificationResponse.generated.h"

USTRUCT(BlueprintType)
struct FYBaseSocialNotificationResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayFabId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    BACKENDMODELS_API FYBaseSocialNotificationResponse();
};

