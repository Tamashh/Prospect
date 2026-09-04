#pragma once
#include "CoreMinimal.h"
#include "YCustomItemInfo.h"
#include "YPlayerSet.h"
#include "YUpdateStationInventoryRequest.generated.h"

USTRUCT(BlueprintType)
struct FYUpdateStationInventoryRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerSet newSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> itemsToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> itemsToUpdateAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> itemsToRemove;
    
    BACKENDMODELS_API FYUpdateStationInventoryRequest();
};

