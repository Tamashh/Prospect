#pragma once
#include "CoreMinimal.h"
#include "YCompletedAction.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYCompletedAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOfTimesActionCompleted;
    
    FYCompletedAction();
};

