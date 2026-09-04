#pragma once
#include "CoreMinimal.h"
#include "YCustomItemInfo.h"
#include "YModifyCustomItemResult.generated.h"

USTRUCT(BlueprintType)
struct FYModifyCustomItemResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool success;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> itemsUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> itemsRemoved;
    
    BACKENDMODELS_API FYModifyCustomItemResult();
};

