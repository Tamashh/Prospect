#pragma once
#include "CoreMinimal.h"
#include "YKilledEventContext.generated.h"

class AYPlayerState;

USTRUCT(BlueprintType)
struct FYKilledEventContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYPlayerState* m_killerPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYPlayerState* m_victimPlayerState;
    
    PROSPECT_API FYKilledEventContext();
};

