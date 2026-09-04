#pragma once
#include "CoreMinimal.h"
#include "YRemoveInventoryItemRequest.generated.h"

USTRUCT(BlueprintType)
struct FYRemoveInventoryItemRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> itemIdsToRemove;
    
    BACKENDMODELS_API FYRemoveInventoryItemRequest();
};

