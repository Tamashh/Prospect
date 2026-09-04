#pragma once
#include "CoreMinimal.h"
#include "YFriendEntry.h"
#include "YUserFriendList.generated.h"

USTRUCT(BlueprintType)
struct FYUserFriendList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYFriendEntry> entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ownerFriendInternalUserId;
    
    BACKENDMODELS_API FYUserFriendList();
};

