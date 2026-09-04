#pragma once
#include "CoreMinimal.h"
#include "YFriendAction.h"
#include "YFriendActionUserName.generated.h"

USTRUCT(BlueprintType)
struct FYFriendActionUserName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString desiredUserName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYFriendAction friendAction;
    
    BACKENDMODELS_API FYFriendActionUserName();
};

