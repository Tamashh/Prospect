#pragma once
#include "CoreMinimal.h"
#include "YCompletedActionsUserData.h"
#include "YStoreUpdatedPlayerActionsDediResult.generated.h"

USTRUCT(BlueprintType)
struct FYStoreUpdatedPlayerActionsDediResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 totalSeasonXp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCompletedActionsUserData updatedActions;
    
    BACKENDMODELS_API FYStoreUpdatedPlayerActionsDediResult();
};

