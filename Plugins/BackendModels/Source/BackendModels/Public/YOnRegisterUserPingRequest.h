#pragma once
#include "CoreMinimal.h"
#include "YPingEntry.h"
#include "YOnRegisterUserPingRequest.generated.h"

USTRUCT(BlueprintType)
struct FYOnRegisterUserPingRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPingEntry> pings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString countryCode;
    
    BACKENDMODELS_API FYOnRegisterUserPingRequest();
};

