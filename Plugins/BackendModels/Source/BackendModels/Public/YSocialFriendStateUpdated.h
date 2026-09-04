#pragma once
#include "CoreMinimal.h"
#include "YFriendEntry.h"
#include "YSocialFriendStateUpdated.generated.h"

USTRUCT(BlueprintType)
struct FYSocialFriendStateUpdated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString internalUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYFriendEntry friendEntry;
    
    BACKENDMODELS_API FYSocialFriendStateUpdated();
};

