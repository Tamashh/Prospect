#pragma once
#include "CoreMinimal.h"
#include "EYVanityUpdateResult.h"
#include "YCustomItemInfo.h"
#include "YVanityBackendItemInfo.h"
#include "YVanitySetCustomItemResultData.generated.h"

USTRUCT(BlueprintType)
struct FYVanitySetCustomItemResultData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYVanityUpdateResult return_result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> updated_items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYVanityBackendItemInfo> updated_vanity_items;
    
    BACKENDMODELS_API FYVanitySetCustomItemResultData();
};

