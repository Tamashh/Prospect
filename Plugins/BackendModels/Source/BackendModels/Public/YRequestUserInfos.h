#pragma once
#include "CoreMinimal.h"
#include "YRequestUserInfos.generated.h"

USTRUCT(BlueprintType)
struct FYRequestUserInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> userIds;
    
    BACKENDMODELS_API FYRequestUserInfos();
};

