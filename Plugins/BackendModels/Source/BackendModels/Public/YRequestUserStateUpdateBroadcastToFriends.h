#pragma once
#include "CoreMinimal.h"
#include "YRequestUserStateUpdateBroadcastToFriends.generated.h"

USTRUCT(BlueprintType)
struct FYRequestUserStateUpdateBroadcastToFriends {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Friends;
    
    BACKENDMODELS_API FYRequestUserStateUpdateBroadcastToFriends();
};

