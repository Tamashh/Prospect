#pragma once
#include "CoreMinimal.h"
#include "YRequestRegisterUserMacAddress.generated.h"

USTRUCT(BlueprintType)
struct FYRequestRegisterUserMacAddress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString macAddress;
    
    YPLATFORMUTILS_API FYRequestRegisterUserMacAddress();
};

