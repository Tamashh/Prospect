#pragma once
#include "CoreMinimal.h"
#include "YCustomItemInfo.h"
#include "YPlayerSet.h"
#include "YPlayerSetItemsEntry.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerSetItemsEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerSet SetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> Items;
    
    BACKENDMODELS_API FYPlayerSetItemsEntry();
};

