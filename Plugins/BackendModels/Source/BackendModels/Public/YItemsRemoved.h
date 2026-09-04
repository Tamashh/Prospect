#pragma once
#include "CoreMinimal.h"
#include "YItemsRemoved.generated.h"

USTRUCT(BlueprintType)
struct FYItemsRemoved {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> removedItems;
    
    BACKENDMODELS_API FYItemsRemoved();
};

