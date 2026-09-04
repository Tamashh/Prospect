#pragma once
#include "CoreMinimal.h"
#include "YDebugClearEntitlements.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYDebugClearEntitlements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString epicAccountId;
    
    FYDebugClearEntitlements();
};

