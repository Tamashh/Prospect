#pragma once
#include "CoreMinimal.h"
#include "YGameServerRequest.h"
#include "TelemetryCustomEvent.generated.h"

USTRUCT(BlueprintType)
struct FTelemetryCustomEvent : public FYGameServerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> Metrics;
    
    YAZUREFUNCTIONSUTILS_API FTelemetryCustomEvent();
};

