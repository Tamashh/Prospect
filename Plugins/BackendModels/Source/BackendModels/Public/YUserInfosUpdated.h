#pragma once
#include "CoreMinimal.h"
#include "YClientUserInfo.h"
#include "YUserInfosUpdated.generated.h"

USTRUCT(BlueprintType)
struct FYUserInfosUpdated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYClientUserInfo> clientUserInfos;
    
    BACKENDMODELS_API FYUserInfosUpdated();
};

