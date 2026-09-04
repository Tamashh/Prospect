#pragma once
#include "CoreMinimal.h"
#include "YCompletedActionsUserData.h"
#include "YGameServerRequest.h"
#include "YStoreUpdatedPlayerActionsDediRequest.generated.h"

USTRUCT(BlueprintType)
struct FYStoreUpdatedPlayerActionsDediRequest : public FYGameServerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCompletedActionsUserData updatedActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 newSeasonXp;
    
    BACKENDMODELS_API FYStoreUpdatedPlayerActionsDediRequest();
};

