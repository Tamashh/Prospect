#pragma once
#include "CoreMinimal.h"
#include "YRequestMissionCompleted.generated.h"

USTRUCT(BlueprintType)
struct FYRequestMissionCompleted {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString currentMissionID;
    
    BACKENDMODELS_API FYRequestMissionCompleted();
};

