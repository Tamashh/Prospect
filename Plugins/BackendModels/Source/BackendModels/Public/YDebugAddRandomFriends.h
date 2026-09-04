#pragma once
#include "CoreMinimal.h"
#include "YDebugAddRandomFriends.generated.h"

USTRUCT(BlueprintType)
struct FYDebugAddRandomFriends {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    BACKENDMODELS_API FYDebugAddRandomFriends();
};

