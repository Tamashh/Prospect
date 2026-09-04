#pragma once
#include "CoreMinimal.h"
#include "EYFriendState.h"
#include "YPlayFabFriend.generated.h"

USTRUCT(BlueprintType)
struct FYPlayFabFriend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FriendPlayFabId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYFriendState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TitleDisplayName;
    
    BACKENDMODELS_API FYPlayFabFriend();
};

