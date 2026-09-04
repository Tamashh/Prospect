#pragma once
#include "CoreMinimal.h"
#include "YAuthorithyPlayerState.generated.h"

USTRUCT(BlueprintType)
struct FYAuthorithyPlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> m_acknowledgedPredictedEventCounters;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> m_serverEventAuthorithyCounter;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 m_stateBitmask;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 m_lastStateChangeWasInterrupted;
    
    PROSPECT_API FYAuthorithyPlayerState();
};

