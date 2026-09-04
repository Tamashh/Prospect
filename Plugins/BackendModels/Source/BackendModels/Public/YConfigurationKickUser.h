#pragma once
#include "CoreMinimal.h"
#include "YConfigurationKickUser.generated.h"

USTRUCT(BlueprintType)
struct FYConfigurationKickUser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYConfigurationKickUser();
};

