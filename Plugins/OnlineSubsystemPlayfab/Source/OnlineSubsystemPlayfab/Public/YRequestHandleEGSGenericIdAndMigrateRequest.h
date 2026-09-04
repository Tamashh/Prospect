#pragma once
#include "CoreMinimal.h"
#include "YRequestHandleEGSGenericIdAndMigrateRequest.generated.h"

USTRUCT(BlueprintType)
struct FYRequestHandleEGSGenericIdAndMigrateRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString epicId;
    
    ONLINESUBSYSTEMPLAYFAB_API FYRequestHandleEGSGenericIdAndMigrateRequest();
};

