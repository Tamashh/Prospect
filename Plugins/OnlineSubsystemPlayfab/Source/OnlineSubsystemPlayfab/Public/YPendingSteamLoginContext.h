#pragma once
#include "CoreMinimal.h"
#include "YPendingSteamLoginContext.generated.h"

USTRUCT(BlueprintType)
struct FYPendingSteamLoginContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SteamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SteamSessionTicket;
    
    ONLINESUBSYSTEMPLAYFAB_API FYPendingSteamLoginContext();
};

