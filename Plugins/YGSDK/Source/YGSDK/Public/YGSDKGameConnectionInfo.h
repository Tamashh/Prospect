#pragma once
#include "CoreMinimal.h"
#include "YGSDKConnectionPort.h"
#include "YGSDKGameConnectionInfo.generated.h"

USTRUCT(BlueprintType)
struct FYGSDKGameConnectionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_publicAdress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYGSDKConnectionPort> m_ports;
    
    YGSDK_API FYGSDKGameConnectionInfo();
};

