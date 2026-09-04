#pragma once
#include "CoreMinimal.h"
#include "YLeaveGameEvent.generated.h"

USTRUCT(BlueprintType)
struct FYLeaveGameEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_reason;
    
    PROSPECT_API FYLeaveGameEvent();
};

