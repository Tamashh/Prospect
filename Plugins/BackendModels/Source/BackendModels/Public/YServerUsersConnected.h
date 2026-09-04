#pragma once
#include "CoreMinimal.h"
#include "YServerUsersConnected.generated.h"

USTRUCT(BlueprintType)
struct FYServerUsersConnected {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> userIds;
    
    BACKENDMODELS_API FYServerUsersConnected();
};

