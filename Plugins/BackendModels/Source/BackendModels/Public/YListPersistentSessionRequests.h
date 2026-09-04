#pragma once
#include "CoreMinimal.h"
#include "YListPersistentSessionRequests.generated.h"

USTRUCT(BlueprintType)
struct FYListPersistentSessionRequests {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString desiredRegion;
    
    BACKENDMODELS_API FYListPersistentSessionRequests();
};

