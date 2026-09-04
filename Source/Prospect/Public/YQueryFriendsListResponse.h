#pragma once
#include "CoreMinimal.h"
#include "YPlayFabFriendWithPresence.h"
#include "YQueryFriendsListResponse.generated.h"

USTRUCT(BlueprintType)
struct FYQueryFriendsListResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayFabFriendWithPresence> Friends;
    
    PROSPECT_API FYQueryFriendsListResponse();
};

