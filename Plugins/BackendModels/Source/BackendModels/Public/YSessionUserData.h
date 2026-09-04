#pragma once
#include "CoreMinimal.h"
#include "YSessionUserData.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYSessionUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString activeSessionId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 utcLastTimeChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 matchState;
    
    FYSessionUserData();
};

