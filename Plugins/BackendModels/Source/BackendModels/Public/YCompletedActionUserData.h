#pragma once
#include "CoreMinimal.h"
#include "YCompletedActionUserData.generated.h"

USTRUCT(BlueprintType)
struct FYCompletedActionUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOfTimesActionCompleted;
    
    BACKENDMODELS_API FYCompletedActionUserData();
};

