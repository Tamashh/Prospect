#pragma once
#include "CoreMinimal.h"
#include "YRequestActiveMission.generated.h"

USTRUCT(BlueprintType)
struct FYRequestActiveMission {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYRequestActiveMission();
};

