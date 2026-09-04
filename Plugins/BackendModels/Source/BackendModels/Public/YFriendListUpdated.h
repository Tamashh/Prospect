#pragma once
#include "CoreMinimal.h"
#include "YFriendEntry.h"
#include "YFriendListUpdated.generated.h"

USTRUCT(BlueprintType)
struct FYFriendListUpdated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString internalUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYFriendEntry> updatedFriends;
    
    BACKENDMODELS_API FYFriendListUpdated();
};

