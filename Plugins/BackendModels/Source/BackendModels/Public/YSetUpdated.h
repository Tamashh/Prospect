#pragma once
#include "CoreMinimal.h"
#include "YPlayerSetItemsEntry.h"
#include "YSetUpdated.generated.h"

USTRUCT(BlueprintType)
struct FYSetUpdated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerSetItemsEntry newSet;
    
    BACKENDMODELS_API FYSetUpdated();
};

