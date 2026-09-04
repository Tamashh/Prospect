#pragma once
#include "CoreMinimal.h"
#include "YGamePingEntry.generated.h"

class UPingIP;

USTRUCT(BlueprintType)
struct FYGamePingEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPingIP* m_pinger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_numberOfPings;
    
    PROSPECT_API FYGamePingEntry();
};

