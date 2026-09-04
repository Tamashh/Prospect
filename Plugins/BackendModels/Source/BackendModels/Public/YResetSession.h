#pragma once
#include "CoreMinimal.h"
#include "YResetSession.generated.h"

USTRUCT(BlueprintType)
struct FYResetSession {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ServerId;
    
    BACKENDMODELS_API FYResetSession();
};

