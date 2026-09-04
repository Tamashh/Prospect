#pragma once
#include "CoreMinimal.h"
#include "YPlayerSetItemsEntry.h"
#include "YGetPlayerSetsResult.generated.h"

USTRUCT(BlueprintType)
struct FYGetPlayerSetsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool success;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayerSetItemsEntry> entries;
    
    BACKENDMODELS_API FYGetPlayerSetsResult();
};

