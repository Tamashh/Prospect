#pragma once
#include "CoreMinimal.h"
#include "YQueueDetails.h"
#include "YQueueuingPlayers.generated.h"

USTRUCT(BlueprintType)
struct FYQueueuingPlayers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYQueueDetails> queues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString exchangeActive;
    
    BACKENDMODELS_API FYQueueuingPlayers();
};

