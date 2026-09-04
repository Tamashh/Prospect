#pragma once
#include "CoreMinimal.h"
#include "YRequestHandleSteamCB1MigrateRequest.generated.h"

USTRUCT(BlueprintType)
struct FYRequestHandleSteamCB1MigrateRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SteamId;
    
    ONLINESUBSYSTEMPLAYFAB_API FYRequestHandleSteamCB1MigrateRequest();
};

