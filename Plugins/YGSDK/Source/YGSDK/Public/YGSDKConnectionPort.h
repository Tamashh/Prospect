#pragma once
#include "CoreMinimal.h"
#include "YGSDKConnectionPort.generated.h"

USTRUCT(BlueprintType)
struct FYGSDKConnectionPort {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_portName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_listeningPort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_connectionPort;
    
    YGSDK_API FYGSDKConnectionPort();
};

